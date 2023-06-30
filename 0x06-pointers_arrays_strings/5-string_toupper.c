#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *Return:(0) Success
 */

char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
	if ((s[a] >= 'a') && (s[a] <= 'z'))
	{
	s[a] = (s[a] - 32);
	}
	a++;
	}
	return (s);
}
