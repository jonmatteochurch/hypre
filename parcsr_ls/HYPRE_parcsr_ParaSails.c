/*BHEADER**********************************************************************
 * (c) 1999   The Regents of the University of California
 *
 * See the file COPYRIGHT_and_DISCLAIMER for a complete copyright
 * notice, contact person, and disclaimer.
 *
 * $Revision$
 *********************************************************************EHEADER*/
/******************************************************************************
 *
 * HYPRE_ParCSRParaSails interface
 *
 *****************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "./HYPRE_parcsr_ls.h"

#include "../distributed_matrix/HYPRE_distributed_matrix_types.h"
#include "../distributed_matrix/HYPRE_distributed_matrix_protos.h"

#include "../matrix_matrix/HYPRE_matrix_matrix_protos.h"

#include "../distributed_linear_solvers/ParaSails/HYPRE_ParaSails.h"

/* Must include implementation definition for ParVector since no data access
  functions are publically provided. AJC, 5/99 */
/* Likewise for Vector. AJC, 5/99 */
#include "../seq_matrix_vector/vector.h"
#include "../parcsr_matrix_vector/par_vector.h"

/* If code is more mysterious, then it must be good */
typedef struct
{
    HYPRE_ParaSails obj;
    int             sym;
    double          thresh;
    int             nlevels;
    double          filter;
    double          loadbal;
    int             reuse; /* reuse pattern */
}
Secret;

/*--------------------------------------------------------------------------
 * HYPRE_ParCSRParaSailsCreate - Return a ParaSails preconditioner object 
 * "solver".  The default parameters for the preconditioner are also set,
 * so a call to HYPRE_ParCSRParaSailsSetParams is not absolutely necessary.
 *--------------------------------------------------------------------------*/

int 
HYPRE_ParCSRParaSailsCreate( MPI_Comm comm, HYPRE_Solver *solver )
{
   Secret *secret;
   
   secret = (Secret *) malloc(sizeof(Secret));

   if (secret == NULL)
       return 1;

   secret->sym     = 1;
   secret->thresh  = 0.1;
   secret->nlevels = 1;
   secret->filter  = 0.1;
   secret->loadbal = 0.0;
   secret->reuse   = 0;

   HYPRE_ParaSailsCreate(comm, &secret->obj);

   *solver = (HYPRE_Solver) secret;

   return 0;
}

/*--------------------------------------------------------------------------
 * HYPRE_ParCSRParaSailsDestroy - Destroy a ParaSails object.
 *--------------------------------------------------------------------------*/

int 
HYPRE_ParCSRParaSailsDestroy( HYPRE_Solver solver )
{
   int ierr = 0;
   Secret *secret;

   secret = (Secret *) solver;
   ierr = HYPRE_ParaSailsDestroy(secret->obj);

   free(secret);

   return ierr;
}

/*--------------------------------------------------------------------------
 * HYPRE_ParCSRParaSailsSetup - Set up function for ParaSails.
 * This function is not called on subsequent times if the preconditioner is 
 * being reused.
 *--------------------------------------------------------------------------*/

int 
HYPRE_ParCSRParaSailsSetup( HYPRE_Solver solver,
                   HYPRE_ParCSRMatrix A,
                   HYPRE_ParVector b,
                   HYPRE_ParVector x      )
{
   int ierr = 0;
   static int virgin = 1;
   HYPRE_DistributedMatrix mat;
   Secret *secret = (Secret *) solver;

   ierr = HYPRE_DistributedMatrixCreate(comm, &matp);
   if (ierr) return ierr;

   ierr = HYPRE_ConvertParCSRMatrixToDistributedMatrix( A, &mat );
   if (ierr) return ierr;

   if (virgin || secret->reuse == 0) /* call set up at least once */
   {
       virgin = 0;
       ierr = HYPRE_ParaSailsSetup(secret->obj, mat, secret->sym, 
           secret->thresh, secret->nlevels, secret->filter, secret->loadbal);
       if (ierr) return ierr;
   }
   else /* reuse is true; this is a subsequent call */
   {
       ierr = HYPRE_ParaSailsSetupValues(secret->obj, mat,
	 secret->filter, secret->loadbal);
       if (ierr) return ierr;
   }

   ierr = HYPRE_DistributedMatrixDestroy(matp);

   return ierr;
}

/*--------------------------------------------------------------------------
 * HYPRE_ParCSRParaSailsSolve - Solve function for ParaSails.
 *--------------------------------------------------------------------------*/

int 
HYPRE_ParCSRParaSailsSolve( HYPRE_Solver solver,
                   HYPRE_ParCSRMatrix A,
                   HYPRE_ParVector b,
                   HYPRE_ParVector x      )
{
   int ierr = 0;
   double *rhs, *soln;
   Secret *secret = (Secret *) solver;

   rhs  = hypre_VectorData(hypre_ParVectorLocalVector((hypre_ParVector *) b));
   soln = hypre_VectorData(hypre_ParVectorLocalVector((hypre_ParVector *) x));

   ierr = HYPRE_ParaSailsApply(secret->obj, rhs, soln);

   return ierr;
}

/*--------------------------------------------------------------------------
 * HYPRE_ParCSRParaSailsSetParams - Set the parameters "thresh" and "nlevels"
 * for a ParaSails object.
 *--------------------------------------------------------------------------*/

int
HYPRE_ParCSRParaSailsSetParams(HYPRE_Solver solver, 
                    double thresh,
                    int    nlevels)
{
   Secret *secret = (Secret *) solver;

   secret->thresh  = thresh;
   secret->nlevels = nlevels;

   return 0;
}

/*--------------------------------------------------------------------------
 * HYPRE_ParCSRParaSailsSetFilter - Set the filter parameter.
 *--------------------------------------------------------------------------*/

int
HYPRE_ParCSRParaSailsSetFilter(HYPRE_Solver solver, 
                    double filter)
{
   Secret *secret = (Secret *) solver;

   secret->filter = filter;

   return 0;
}

/*--------------------------------------------------------------------------
 * HYPRE_ParCSRParaSailsSetSym - Set whether the matrix is symmetric:
 * nonzero = symmetric, 0 = nonsymmetric.
 *--------------------------------------------------------------------------*/

int
HYPRE_ParCSRParaSailsSetSym(HYPRE_Solver solver, 
                    int sym)
{
   Secret *secret = (Secret *) solver;

   secret->sym = sym;

   return 0;
}

/*--------------------------------------------------------------------------
 * HYPRE_ParCSRParaSailsSetLoadbal
 *--------------------------------------------------------------------------*/

int
HYPRE_ParCSRParaSailsSetLoadbal(HYPRE_Solver solver, 
                    double loadbal)
{
   Secret *secret = (Secret *) solver;

   secret->loadbal = loadbal;

   return 0;
}

/*--------------------------------------------------------------------------
 * HYPRE_ParCSRParaSailsSetReuse - reuse pattern if "reuse" if nonzero
 *--------------------------------------------------------------------------*/

int
HYPRE_ParCSRParaSailsSetReuse(HYPRE_Solver solver, 
                    int reuse)
{
   Secret *secret = (Secret *) solver;

   secret->reuse = reuse;

   return 0;
}
