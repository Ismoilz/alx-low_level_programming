#include "main.h"

/**
 * print_sign - Checks if value is positive negative or zero
 * Return: 1 if positive, -1 if negative, 0 if zero
 */

int print_sign(char c)

	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar(0 + '\0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
