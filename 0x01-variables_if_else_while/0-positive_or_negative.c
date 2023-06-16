#include <stdio.h>
#include <time.h>
/*
 * Main - check if random number is positive or negative
 *
 * Return: 0
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
    {
        printf("The number %d is positive.\n", n);
    }
    else
    {
        printf("The number %d is negative.\n", n);
    }
    return 0;
}
