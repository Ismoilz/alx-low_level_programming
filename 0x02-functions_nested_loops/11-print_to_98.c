#include <stdio.h>
#include "main.h"

void count_to_98(int n)
{
	if (n > 98) {
		printf("%d\n", 98);
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
