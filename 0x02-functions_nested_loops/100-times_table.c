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

	mult = i * m;
	while (i <= n)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		for (m = 1 ; m < n; m++)
		{
			_putchar('0' + mult);
			_putchar(',');
			_putchar(' ');
		}
		while (m == n)
		{
			_putchar('0' + mult);
		}
		_putchar('\n');
	}
	i++;
}
