#include <stdlib.h>

/**
 * str_concat - concatenate/connects two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	int len1;

	len1 = 0;

	while (s1[len1] != '\0')
	len1++;

	int len2;

	len2 = 0;

	while (s2[len2] != '\0')
	len2++;

	char *concatenated;

	concatenated = malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
	return (NULL);

	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	concatenated[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++, i++)
	concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}
