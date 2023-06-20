#include "main.h"

/**
 * main - Entry point
 * print alphabet: Prints lower case alphabet
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char x;

	x = 'a';

	while (x < 'z' + 1)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
