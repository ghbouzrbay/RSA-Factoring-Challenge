#include "factor.h"

void factorize(int number)
{
    int i;
    for (i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
	{
            printf("%d=%d*%d\n", number, i, number / i);
        }
    }
}

