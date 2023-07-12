#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, initializes with a specific char
 * @size: size of the array
 * @c: start of array
 * Return: array = success, Null = error
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	p = malloc(size);

	if (size == 0 || p == 0)
	return (0);
	
	while (size--)
	p[size] = c;

	return (p);
}
