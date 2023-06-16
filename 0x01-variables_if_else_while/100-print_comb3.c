/**
 * main - Entry point of the program.
 *
 * Description: This program lists combination of 2 digits
 *		using a while loop.
 * Return: 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	int x = 0;

	while (x <= 8)
	{
		int y = x + 1;

		while (y <= 9)
		{
			putchar(x + '0');
			putchar(y + '0');

			if (x != 8 || y != 9)
			{
				putchar(',');
				putchar(' ');
			}

			y++;
		}

		x++;
	}

	putchar('\n');

	return (0);
}


