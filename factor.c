#include "factor.h"
#include <math.h>

/**
 * smallest_divisor - finds the smallest divisor of a given number.
 * @number: a number to find the smallest divisor for.
 *Return: smallest divisor if found, or 0 if the number is prime
 */

int smallest_divisor(long int number)
{
    long int divisor;

    if (number % 2 == 0)
    {
      printf("%lu=%lu*%i\n", number, number / 2, 2);
        return (0);
    }

    divisor = 3;
    while (divisor * divisor <= number)
    {
        if (number % divisor == 0)
        {
	  printf("%lu=%lu*%lu\n", number, number / divisor, divisor);
	  return (0);
        }
        else
            divisor += 2;
    }

    printf("%lu=%lu*%i\n", number, number, 1);
    return (0);
}
