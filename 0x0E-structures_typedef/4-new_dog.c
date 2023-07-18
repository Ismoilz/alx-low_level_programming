#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - adds new dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: Pointer to new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *Pname, *Oname;
	int Plength, Olength;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	Plength = _strlen(name);
	Olength = _strlen(owner);
	Pname = malloc(sizeof(char) * Plength + 1);
	if (Pname == NULL)
	{
		free(Pname);
		free(new_dog);
		return (NULL);
	}
	Pname = _strcpy(Pname, name);
	Oname = malloc(sizeof(char) * Olength + 1);
	if (Oname == NULL)
	{
		free(Oname);
		free(Pname);
		free(new_dog);
		return (NULL);
	}
	Oname = _strcpy(Oname, owner);
	new_dog->name = Pname;
	new_dog->age = age;
	new_dog->owner = Oname;
	return (new_dog);
}

/**
 * _strlen - counts string length
 * @s: pointer to string
 * Return: length
 */

int _strlen(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (i);
}

/**
 * _strcpy - copy
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
