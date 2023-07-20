#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  *print_all - prints anything.
  *@format: arguments passed to the function.
  *
  *Return: nothing
  */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	const char *separator;

	str = va_arg(args, char *);
	separator = "";
	i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
			case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
			case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
			case 's':
			if (str == NULL)
			str = "(nil)";
			printf("%s%s", separator, str);
			break;
			default:
			break;
		}
		separator = ", ";
		i++;
	}

	va_end(args);

	printf("\n");
}
