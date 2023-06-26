#include "main.h"

/**
 * _strlen - gives string length
 * @s: string to check
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}
