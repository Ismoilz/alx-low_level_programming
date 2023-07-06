#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n: number
 * Return: -1 if not natural
 */

int _sqrt_recursion(int n)
{
	int sqr_calc(int n, int sq);

	int sq = 1;

	return (sqr_calc(n, sq));
}

/**
 * sqr_calc - calculate square root
 * @sq: square root
 * @n:  number
 * Return: -1 if not natural
 */

int sqr_calc(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqr_calc(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
