#include "main.h"

/**
 * print_binary - change decimal to binary
 * @n: decimal input
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 4294967296;
	int i = 0;

	if (n == 0)
		_putchar('0');
	while (mask > 0)
	{
		if ((mask & n) == 0)
		{
			if (i == 1)
				_putchar('0');
		}
		else
		{
			i = 1;
			_putchar('1');
		}
		mask = mask >> 1;
	}
}
