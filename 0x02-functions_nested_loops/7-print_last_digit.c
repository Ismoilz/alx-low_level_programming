#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the number to get the last digit
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int x;

	if (x > 0)
	{ 
		x = n % 10;
		_putchar(x+ '0');
		return (x);
	}
	else 
	{
		x = n % -10
		_putchar(x + '0');
		return (x);
	}
}

