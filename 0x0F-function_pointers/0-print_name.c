#include <stdio.h>
#include "function_pointers.h"


/**
* main - Call the function pointed to by the function pointer f
* @name: name to print
* @f: pointer to the function
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
