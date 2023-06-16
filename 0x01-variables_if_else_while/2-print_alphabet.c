#include <stdio.h>

/* main - Lists alphabet from a to z
 * Return: 0
 */
int main (void)
{
	char x;
	
	x = 'a';
	while(x <= 'z')
	{
		putchar(x);
		x++;	
	}
	putchar('\n');
	return(0);
}
