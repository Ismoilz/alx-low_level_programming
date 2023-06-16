#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Check if a random number is positive, zero, or negative
 *
 * Description: Uses if conditions to check the value of n
 *              and prints the proper message accordingly.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
