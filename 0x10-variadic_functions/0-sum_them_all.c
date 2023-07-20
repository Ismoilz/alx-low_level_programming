#include <stdarg.h>
#include "function_pointers.h"

/**
 *sum_them_all - sums all parameters
 *@n: int
 *Return: sum of all parameters, return 0 if n=0
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	return (0);

	int sum = 0;

	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
