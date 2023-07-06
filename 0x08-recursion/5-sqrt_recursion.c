#include "main.h"

/**
* sq_calc - calculates sq
* @sq: square
* Returns: -1 if not natural
*/

int sq_calc(int n, int sq)
{

	if (sq * sq == n)
	{
		return (sq);
	}
	if (sq * sq > n)
	{
		return (-1);
	}
	else
		return (sqrt_value((sq + 1), n));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Returns: -1 if not natural
 */
int _sqrt_recursion(int n)
{
	return (sqrt_value(1, n));
}
