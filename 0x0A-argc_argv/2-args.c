#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: arg counter
 * @argv: string
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i= 0; i< argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
