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
	int m;
	int mult;

	if ((n < 0) || (n > 15))
		return;
	for (i = 0; i <= n; i++)
		{
			for (m = 0 ; m <= n; m++)
			{
				mult = i * m;
				if (m > 0)
				{
					_putchar(',');
					if (mult < 100)
						_putchar(' ');
					if (mult < 10)
						_putchar(' ');
					_putchar(' ');
				}
				if (mult >= 100)
					_putchar('0' + (mult / 100));
				if (mult >= 10)
					_putchar('0' + (mult / 10 % 10));
				_putchar('0' + (mult % 10));
			}
			_putchar('\n');
		}
}
