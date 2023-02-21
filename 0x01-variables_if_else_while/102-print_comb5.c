#include <stdio.h>

/**
 *main -Entry point a program that print combinations of two two  digits
 *
 * Return: alwasy 0 (success)
 */

int main(void)
{
	int x = 0, y = 1, xmax = 98, ymax = 99;

	while (x <= xmax) 
	{
		y = x + 1;
		while (y <= ymax)
		{
			putchar(x < 9 ? 0 + '0' : (x / 10) + '0');
			putchar(x < 9 ? x + '0' : (x % 10) + '0');
			putchar(' ');
			putchar(y < 9 ? 0 + '0' : (y / 10) + '0');
			putchar(y < 9 ? y + '0' : (y % 10) + '0');
			if (x != y)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
