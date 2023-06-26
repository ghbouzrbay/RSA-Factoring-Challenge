#include "factor.h"

/**
 * factorize - The function factorize a number
 * @buff: pointer to the address of the number
 */

void factorize(char *buff)
{
    int i;
    int num;

    number = atoi(buff);

    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
	{
            printf("%d=%d*%d\n", number, number/i, number);
        break;
	}
    }
}

