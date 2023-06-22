#include "main.h"

/**
 * 
 * _isupper - checks if letter is upper case or lower case
 * @c: test character
 * Return: 1 if upper 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
