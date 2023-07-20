#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints numbers followed by a new line
 *@seperator: string to print between num
 *@n: number of integers passed to the function
 *Return: 0 if the separator is NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
    
	va_start(args, n);
    
	for (i = 0; i < n; i++) {
		printf("%d", va_arg(args, int));
        
		if (separator != NULL && i < n - 1) {
		printf("%s", separator);
		}
	}
    
	va_end(args);
    
	printf("\n");
}
