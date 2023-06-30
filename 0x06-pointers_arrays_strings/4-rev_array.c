#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers
 * @n: number of integers
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
