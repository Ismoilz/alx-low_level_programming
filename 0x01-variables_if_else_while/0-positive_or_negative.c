#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * main - check if random number n is positive, a zero or negative
 *
 * Description: uses if condition to check the value of n
 * and prints the proper message accordingly
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
