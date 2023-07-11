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
	int i;
	char *array

	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
