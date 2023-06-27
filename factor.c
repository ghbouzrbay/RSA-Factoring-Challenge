#include "factor.h"
#include <math.h>

/**
 * smallest_divisor - finds the smallest divisor of a given number.
 * @number: a number to find the smallest divisor for.
 */

void smallest_divisor(long int number)
{
    long int divisor;

    if (number % 2 == 0)
    {
        printf("%ld = %ld * %d\n", number, number / 2, 2);
        return;
    }

    divisor = 3;
    while (divisor * divisor <= number)
    {
        if (number % divisor == 0)
        {
            printf("%ld = %ld * %ld\n", number, number / divisor, divisor);
            return;
        }
        else
            divisor += 2;
    }

    printf("%ld = %ld * %d\n", number, number, 1);
}
