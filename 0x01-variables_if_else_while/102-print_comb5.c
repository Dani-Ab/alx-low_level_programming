#include <stdio.h>

/**
 *main -Entry point a program that print combinations of two two  digits
 *
 * Return: alwasy 0 (success)
 */

int main(void)
{
	int u, x, y, z;

	for (u = '0'; u <= '9'; u++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = x + 1; y <= '9'; y++)
			{
				for (z = y + 1; z <= '9'; z++)
				{
					if ((u != y) && (x != z))
					{
						putchar(u);
						putchar(x);
						putchar(' ');
						putchar(y);
						putchar(z);
						if ((u == '9' && x == '8') && (y == '9' && z == '9'))
						{
							continue;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
