
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - prints string followed by a new line
 *@separator: string between numbers
 *@n: ints in the function
 *Return: 0 if separator = NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str != NULL)
		printf("%s", str);
		else
	{
		printf("(nil)");
	}

	if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
