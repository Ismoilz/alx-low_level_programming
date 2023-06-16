#include<stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: This program lists the alphabet from 'z' to 'a'
 *		using a while loop and putchar.
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
