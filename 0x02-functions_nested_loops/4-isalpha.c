#include "main.h"

/**
 * _isalpha - checks for alphabetic value
 * @c: character to verify
 * Return: 1 if alphabetic 0 otherwise
 */

int _isalpha(char c)
{
	while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
		return (1);
	}
	return (0);
}
