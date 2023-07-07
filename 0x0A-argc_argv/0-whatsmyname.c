#include <stdio.h>

/**
 * main - a program that prints its name
 * @argv: string
 * @argc: counter
 * Return: 0 succcess
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[0]);
		i++;
	}
	return (0);
}
