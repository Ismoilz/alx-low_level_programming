#include <stdlib.h>
#include "main.h"
 
/**
 * _strdup - prints out a string given a parameter
 * @str: string to print
 * Return: Pointer to a the string
 */


char *_strdup(char *str)
{
	char *duplicate;

	int length;

	if (str == NULL)
	return NULL;

	length = 0;

	while (str[length] != '\0')
 	length++;

    
	duplicate = malloc((length + 1) * sizeof(char));
    
	if (duplicate == NULL)
        return NULL;

	for (int i = 0; i < length; i++)
		duplicate[i] = str[I];
		duplicate[length] = '\0';

	return duplicate;
}
