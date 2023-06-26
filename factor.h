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

ssize_t getline(char **lineptr, size_t *n, FILE *stream);
Factorization* factorize_number(int number, int* count);
void factorize_file(const char* file_path);
int main(int argc, char *argv[]);

#endif /******FOCTOR_H********/
