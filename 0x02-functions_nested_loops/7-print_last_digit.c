#include "main.h"

/**
 * print_last_digit - print the last digit of a  number.
 * @n: The number to be checked
 *
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int lst;

	lst = n % 10;
	if (lst < 0)
	{
		lst *= -1;
	}
	_putchar('0' + lst);
	return (lst);
}

