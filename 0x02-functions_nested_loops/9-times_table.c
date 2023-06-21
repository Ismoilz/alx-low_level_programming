#include "main.h"

/**
 * times_table - prints the 9 times table on a 9x10 grid
 */

void times_table(void)
{
	int x, y, n;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y < 10; y++)
	{
		n = x * y;
		if (y == 0)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			} 
			else
		{
			_putchar(' ');
		}
			_putchar((n % 10) + '0');
		}
	}
	_putchar('\n');
	}
}
