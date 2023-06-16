#include <stdio.h>

/*
 * main - lists alphabet from a to z
 * Description: Using while loop and putchar to list alphabet one by one.
 * Return: 0
 */
int main(void)
{
	char x;

	x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
