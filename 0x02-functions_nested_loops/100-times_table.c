#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n : input n
 *
 * Return : nothing
 */

void print_times_table(int n)
{
	int i = 0;
	int m = 0;
	int mult;

	while ((n <= 0) || (n < 15))
	{
		while (i <= n)
		{
			_putchar(0 + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			for (m = 1 ; m < n; m++)
			{
				mult = i * m;
				if (mult <= 9)
				{
					_putchar('0' + mult);
				}
				else if (mult < 100)
				{
					_putchar('0' + (mult / 10));
					_putchar('0' + (mult % 10));
				}
				else
				{
					_putchar('0' + ((mult / 10) / 10));
					_putchar('0' + ((mult / 10) % 10));
					_putchar('0' + (mult % 10));
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			mult = i * m;
			if (mult <= 9)
			{
				_putchar('0' + mult);
			}
			else if (mult < 100)
			{
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));
			}
			else
			{
				_putchar('0' + ((mult / 10) / 10));
				_putchar('0' + ((mult / 10) % 10));
				_putchar('0' + (mult % 10));
			}
			_putchar('\n');
			i++;
		}
	}
}
