#include "main.h"

/**
 * print_square - print a square using #
 * @n: square dimensions
 */

void print_square(int n)
{
	int i, j;

	j = 0;

	if (n < 1)
		_putchar('\n');

	while (j < n)
	{
		i = 0;
		while (i < n)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
