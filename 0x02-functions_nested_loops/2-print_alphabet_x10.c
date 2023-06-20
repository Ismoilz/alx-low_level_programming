#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char x;

	i = 0;

	while (i < 10)
	{
	x = 'a';

	while (x < 'z' + 1)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
	i++;
	}
}
