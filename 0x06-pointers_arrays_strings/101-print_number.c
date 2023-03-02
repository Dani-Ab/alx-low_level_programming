#include "main.h"

/**
  * print_number - Prints an integer
  * @n: input Number
  *
  * Return: Nothing
  */

void print_number(int n)
{
	unsigned int i;

	if (n < 10 && n >= 0)
	{
		_putchar('0' + n);
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	i = n;

	if (i / 10)
		print_number(i / 10);

	_putchar(i % 10 + '0');
}
