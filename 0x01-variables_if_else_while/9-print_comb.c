#include<stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program lists numbers from '0' to '9'
 *		separated with ", "
 *		using a while loop.
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	x = '0';

	while (x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
		putchar(',');
		putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
