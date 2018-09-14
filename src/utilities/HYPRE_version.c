/*BHEADER**********************************************************************
 * Copyright (c) 2008,  Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 * This file is part of HYPRE.  See file COPYRIGHT for details.
 *
 * HYPRE is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License (as published by the Free
 * Software Foundation) version 2.1 dated February 1999.
 *
 * $Revision$
 ***********************************************************************EHEADER*/

/******************************************************************************
 *
 * HYPRE_Version utility functions
 *
 *****************************************************************************/

#include "_hypre_utilities.h"

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

HYPRE_Int
HYPRE_Version( char **version_ptr )
{
   HYPRE_Int  len = 30;
   char      *version;

   /* compute string length */
   len += strlen(HYPRE_RELEASE_VERSION);

   version = hypre_CTAlloc(char, len, HYPRE_MEMORY_HOST);

   hypre_sprintf(version, "HYPRE Release Version %s", HYPRE_RELEASE_VERSION);

   *version_ptr = version;

   return hypre_error_flag;
}

/*--------------------------------------------------------------------------
 * Helper routine for user routine below
 *--------------------------------------------------------------------------*/

HYPRE_Int
hypre_VersionNumber( HYPRE_Int  *major,
                     HYPRE_Int  *minor,
                     HYPRE_Int  *patch,
                     HYPRE_Int  *release,
                     HYPRE_Int  *single )
{
   HYPRE_Int  nums[3], i, j;
   char      *ptr = HYPRE_RELEASE_VERSION;

   /* get major/minor/patch numbers */
   for (i = 0; i < 3; i++)
   {
      char str[4];

      for (j = 0; (j < 3) && (*ptr != '.') && (*ptr != '\0'); j++)
      {
         str[j] = *ptr;
         ptr++;
      }
      str[j] = '\0';
      nums[i] = atoi((char *)str);
      ptr++;
   }
   *major = nums[0];
   *minor = nums[1];
   *patch = nums[2];

   /* Fix this */
   *release = 1;

   /* Compute a single, unique, sortable number representation of the release.
    * This assumes 2 digits for each subnumber, so 2.14.0 becomes 21400. */
   *single = *major*10000 + *minor*100 + *patch;

   return hypre_error_flag;
}

/*--------------------------------------------------------------------------
 *--------------------------------------------------------------------------*/

HYPRE_Int
HYPRE_VersionNumber( HYPRE_Int  *major_ptr,
                     HYPRE_Int  *minor_ptr,
                     HYPRE_Int  *patch_ptr,
                     HYPRE_Int  *release_ptr,
                     HYPRE_Int  *single_ptr )
{
   HYPRE_Int  major, minor, patch, release, single;
   
   hypre_VersionNumber(&major, &minor, &patch, &release, &single);

   if (major_ptr)   {*major_ptr   = major;}
   if (minor_ptr)   {*minor_ptr   = minor;}
   if (patch_ptr)   {*patch_ptr   = patch;}
   if (release_ptr) {*release_ptr = release;}
   if (single_ptr)  {*single_ptr  = single;}

   return hypre_error_flag;
}