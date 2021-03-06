/*==============================================================================
coords_dist.h: object representation and related functions
Copyright (C) 2008-2015 Jens Kleinjung and Alessandro Pandini
Read the COPYING file for license information.
==============================================================================*/

#ifndef COORDS_DIST_H
#define COORDS_DIST_H

#include <math.h>

#include "arg.h"
#include "config.h"
#include "matrix.h"
#include "safe.h"

/* input data */
typedef struct {
	float **dist; /* point distances */
	int nData; /* number of data points */
} Dat;

/*____________________________________________________________________________*/
/* prototypes */
int get_data(char *inFileName, Dat *dat);

void print_header_object(FILE *outfile);
void print_object(FILE *outfile, Dat *dat, int index, int order, int cluster_id, float coreDist, float reachDist);
float calc_dist_asym(Dat *dat, int i, int j, Arg *arg);
float calc_dist_sym(Dat *dat, int i, int j, Arg *arg);
float calc_dist_SH(Dat *dat, int i, int j, Arg *arg);
float calc_dist_cartesian(Dat *dat, int i, int j, Arg *arg);
float calc_dist_manhattan(Dat *dat, int i, int j, Arg *arg);

#endif
