#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - counts to 98
 * @n: number to count from
 */

void print_to_98(int n)
{
	if (n > 98) {
		printf("%d\n", 98);
		return;

	}

	while (n <= 98) {
		printf("%d", n);
	if (n != 98) {
		printf(", ");
	}

	n++;
	}
	printf("\n");
}
