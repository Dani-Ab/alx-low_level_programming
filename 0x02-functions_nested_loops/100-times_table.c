#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n : input n
 *
 * Return : nothing
 */

void print_times_table(int n)
{
	int i;
	int m = 0;
	int mult;

	while ((n >= 0) || (n < 15))
	{
		for (i = 0; i < n; i++)
		{
			for (m = 1 ; m < n; m++)
			{
				mult = i * m;
				if (m <= 9)
				{
					_putchar(',');
					if (mult < 100)
						_putchar(' ');
					if (mult < 10)
						_putchar(' ');
					_putchar(' ');
				}
				if (mult > 100)
					_putchar('0' + (mult / 100));
				if (mult > 9)
					_putchar('0' + (mult / 10));
				if (mult < 10)
					_putchar('0' + (mult % 10));
			}
			_putchar('\n');
		}
	}
}
