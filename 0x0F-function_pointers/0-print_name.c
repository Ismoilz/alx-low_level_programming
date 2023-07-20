#include <stdio.h>

/**
* main - Call the function pointed to by the function pointer f
* @name: name to print
* @f: pointer to the function
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
