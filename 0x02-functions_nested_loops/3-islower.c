#include "main.h"

/**
 * _islower - checks for lowercase
 * c: variable to check
 * Return: 1 if lowercase 0 otherwise
 */

int _islower(char c)
{
	while (c >= 'a'&& c <= 'z')
	{
		return (1);
	}
	return (0);
}

