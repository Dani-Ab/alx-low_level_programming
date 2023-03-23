#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_strings - print trings with specified separators
 * @separator: passed separators to be used between numbers
 * @n: number of strings passed
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if ((i < n) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
