#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 * Return: factorial of n; -1 if negative
 */

int factorial(int n)
{
	if (n > 0)
	{
		if (n == 0 || n == 1)
		{
		return (1);
	}
	return (n * factorial(n - 1));
	}
	return (-1);
}

