#include "main.h"
/**
 * print_sign - check number
 *
 * @n: commparing character
 * Return: 1 graterthan zero,0 equals to zero and -1 lessthan zeros
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
