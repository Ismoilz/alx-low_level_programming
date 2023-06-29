include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string 2
 * @src: string 1
 * n: length of the destination string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;

	int i = 0;

	while (dest[x] != '\0')
		x++;

	while (src[i] != '\0' && i < x)
	{
	dest[x] = src[i];
	x++;
	i++;
	}
	dest[x] = '\0';

	return (dest);
}
