/*
 * DIXtrac - Automated Disk Extraction Tool
 * Authors: Jiri Schindler, John Bucy, Greg Ganger
 *
 * Copyright (c) of Carnegie Mellon University, 1999-2005.
 *
 * Permission to reproduce, use, and prepare derivative works of
 * this software for internal use is granted provided the copyright
 * and "No Warranty" statements are included with all reproductions
 * and derivative works. This software may also be redistributed
 * without charge provided that the copyright and "No Warranty"
 * statements are included in all redistributions.
 *
 * NO WARRANTY. THIS SOFTWARE IS FURNISHED ON AN "AS IS" BASIS.
 * CARNEGIE MELLON UNIVERSITY MAKES NO WARRANTIES OF ANY KIND, EITHER
 * EXPRESSED OR IMPLIED AS TO THE MATTER INCLUDING, BUT NOT LIMITED
 * TO: WARRANTY OF FITNESS FOR PURPOSE OR MERCHANTABILITY, EXCLUSIVITY
 * OF RESULTS OR RESULTS OBTAINED FROM USE OF THIS SOFTWARE. CARNEGIE
 * MELLON UNIVERSITY DOES NOT MAKE ANY WARRANTY OF ANY KIND WITH RESPECT
 * TO FREEDOM FROM PATENT, TRADEMARK, OR COPYRIGHT INFRINGEMENT.
 */

#ifndef __READ_PARAMS_H
#define __READ_PARAMS_H

#include "extract_layout.h"


#define disk diskinfo_t
#define band band_t

diskinfo_t *read_layout_file(char *modelname);

/****************************************************************************
 * internal functions - taken from DiskSim code                             *
 ****************************************************************************/
void dxtrc_getparam_int(FILE *parfile,char *parname,int *parptr,int parchecks,
        int parminval,int parmaxval);
void dxtrc_getparam_bool(FILE *parfile,char *parname,int *parptr);
void dxtrc_getparam_double(FILE *parfile,char *parname, double *parptr,
			   int parchecks, double parminval, double parmaxval);
void dxtrc_bandcopy(band *destbands, band *srcbands, int numbands);
void dxtrc_band_read_specs(disk *currdisk, int numbands, FILE *parfile,
		     int numsurfaces, int sparescheme);
void dxtrc_disk_read_specs(FILE *parfile);

#endif 
