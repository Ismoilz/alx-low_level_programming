#include "main.h"
#define NULL 0

/**
 * _strchr - a function that locates a character in a string.
 * @s: string
 * @c: character
 * Return: pointer to C
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
		return (s);
	else
		return (NULL);
}
