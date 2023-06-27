#include "factor.h"
#include <math.h>

/**
 * factorize_number - ...
 *
 * @number: ...
 * @count: ...
 * 
 * Return: ...
 */

Factorization* factorize_number(int number, int* count)
{
int i;
Factorization* factorizations = NULL;
*count = 0;
   
for (i = 2; i <= sqrt(number); i++)
{
while (number % i == 0)
{
*count += 1;
factorizations = realloc(factorizations, sizeof(Factorization) * (*count));
factorizations[*count - 1].p = i;
factorizations[*count - 1].q = number / i;
number /= i;
}
}

if (number > 1)
{
*count += 1;
factorizations = realloc(factorizations, sizeof(Factorization) * (*count));
factorizations[*count - 1].p = number;
factorizations[*count - 1].q = 1;
}

return (factorizations);
}

/**
 * factorize_file - ...
 * 
 * @file_path: ...
 */

void factorize_file(const char* file_path)
{
FILE* file = fopen(file_path, "r");
int count = 0;
int* numbers = NULL;
int i, j;
int factor_count;
int number;

if (file == NULL)
{
printf("Failed to open the file.\n");
return;
}

while (fscanf(file, "%d", &number) == 1)
{
count += 1;
numbers = realloc(numbers, sizeof(int) * count);
numbers[count - 1] = number;
}

fclose(file);

for (i = 0; i < count; i++)
{
Factorization* factorizations = factorize_number(numbers[i], &factor_count);

for (j = 0; j < factor_count; j++)
{
printf("%d=%d*%d\n", factorizations[j].p * factorizations[j].q, factorizations[j].p, factorizations[j].q);
}

free(factorizations);
}

free(numbers);
}

