#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers with specified separators
 * @separator: passed separators to be used between numbers
 * @n: number of integers passed
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list args;

	if (separator == 0)
	{
		exit(0);
	}
	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		num = va_arg(args, int);
		if (i == 1)
			printf("%d' '%s ", num, separator);
		if (i == n)
			printf("%d", num);
	}
	va_end(args);
}
