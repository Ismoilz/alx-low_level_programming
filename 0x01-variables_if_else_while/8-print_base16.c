#include<stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program lists hexadecimal values from '0' to 'f'
 *		using a while loop.
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	x = 0;

	while (x <= 16)
	{
		printf("%x", x);
		x++;
	}
	printf("\n");
	return (0);
}
