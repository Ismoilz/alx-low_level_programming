#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program lists combination of 3 digits
 *		using a while loop.
 * Return: 0 (Success)
 */
int main(void)
{
    int x = 0;
    int y, z;

    while (x <= 7)
    {
        y = x + 1;

        while (y <= 8)
        {
            z = y + 1;

            while (z <= 9)
            {
                putchar(x + '0');
                putchar(y + '0');
                putchar(z + '0');

                if (!(x == 7 && y == 8 && z == 9))
                {
                    putchar(',');
                    putchar(' ');
                }

                z++;
            }

            y++;
        }

        x++;
    }

    putchar('\n');
    return 0;
}
