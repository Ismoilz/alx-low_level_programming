#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments
 * @argc: arg counter
 * @argv: string
 * Return: 0 success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
