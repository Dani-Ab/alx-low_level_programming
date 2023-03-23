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
	va_list args;
	unsigned int i, num;

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if ((i < n) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
