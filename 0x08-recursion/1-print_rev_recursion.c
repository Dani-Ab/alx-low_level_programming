#include "main.h"

/**
 * _strlen_recursion - prints a string in revers
 * @s: input string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
