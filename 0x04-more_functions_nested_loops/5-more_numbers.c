#include "main.h"

/**
 * more_numbers - Prints from 0 to 14, 10 times
 */

void more_numbers(void);
{
	char x;

	int i = 0;

	while (i < 10)
	{

		x = '0';

	while (x <= '14')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
	i++;
	}
}
