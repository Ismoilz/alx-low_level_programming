#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - a function that allocates memory using malloc
 *@b: int variable
 *Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}

	return (a);
}
