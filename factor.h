#ifndef _FACTOR_H_
#define _FACTOR_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define _GNU_SOURCE

/***************FUNCTIONS************/

ssize_t getline(char **lineptr, size_t *n, FILE *stream);
int factorize(char *buff);
int main(int argc, char *argv[]);

#endif /******FOCTOR_H********/
