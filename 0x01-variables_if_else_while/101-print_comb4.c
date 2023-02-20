#include <stdio.h>

/**
 *main -Entry point a program that print combinations of three digits
 *
 * Return: alwasy 0 (success)
 */

int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + '1'; y < '9'; y++)
		{
			for (z = y + '1'; z < '9'; z++)
			{
				if (x != (y != z))
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != '7' && (y != '8' && z != '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}

			}
		}

	}
	return (0);
}


