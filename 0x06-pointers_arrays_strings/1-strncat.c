#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string 2
 * @src: string 1
 * n: length of the destination string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int n = 0;

	int i = 0;

	while (dest[n] != '\0')
		n++;

	while (src[i] != '\0' && i < n)
	{
	dest[n] = src[i];
	n++;
	i++;
	}
	dest[n] = '\0';

	return (dest);
}
