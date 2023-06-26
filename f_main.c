#include "factor.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - ...
 *
 *@argc: ...
 *@argv: ...
 *
 * Return: ...
 */

int main(int argc, char* argv[])
{
const char* file_path = argv[1];
if (argc != 2)
    {
        printf("Usage: factors <file>\n");
        return (1);
    }

    factorize_file(file_path);

    return (0);
}
