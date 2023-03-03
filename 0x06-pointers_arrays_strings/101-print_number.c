#include "main.h"

/**
  * print_number - Prints an integer
  * @n: input Number
  *
  * Return: Nothing
  */

void print_number(int n)
{
	/*unsigned int i;*/
	if (n < 10 && n >= 0)
	{
		_putchar(n);
	}
	if (n < 0)
	{
		n *= -n;
		_putchar('-');
	}
	
	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
