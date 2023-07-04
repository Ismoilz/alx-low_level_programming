#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to check
 * @accept: characters to compare
 * Return: character counter
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int counter;

	i = 0;
	counter = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (counter);
}
