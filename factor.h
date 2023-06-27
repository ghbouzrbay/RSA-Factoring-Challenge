#ifndef _FACTOR_H_
#define _FACTOR_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

typedef struct {
    int p;
    int q;
} Factorization;

/***************FUNCTIONS************/

void smallest_divisor(long int number);
#endif /******FOCTOR_H********/
