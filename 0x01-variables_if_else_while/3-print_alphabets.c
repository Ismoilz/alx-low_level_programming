#include<stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: This program lists the alphabet from 'a' to 'z'
 * 		both lowercase and uppercase,
 *		using a while loop and putchar.
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	x = 'a';
	y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
