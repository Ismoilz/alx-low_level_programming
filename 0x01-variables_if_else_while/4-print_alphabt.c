#include<stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: This program lists the alphabet from 'a' to 'z' except 'e'
 *		using a while loop and putchar.
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
		putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
