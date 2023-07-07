#include <stdio.h>

/**
 * main - multiplies 2 numbers
 * @argc: arg counter
 * @argv: string
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);

	return (0);
}
