#include<stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program lists numbers from '0' to '9'
 *		using a while loop.
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
