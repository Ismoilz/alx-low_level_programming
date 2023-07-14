#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_len, s2_len, i;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	;

	str = malloc(s1_len + s2_len + 1);


	if (n >= s2_len)
		n = s2_len;

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (i = 0; i < n; i++)
		str[s1_len + i] = s2[i];

	str[s1_len + n] = '\0';

	if (str == NULL)
		return (NULL);

	return (str);
}
