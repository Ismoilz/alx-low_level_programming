#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s:buffer
 * @b:constant byte
 * @n:size
 * Return: result array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
