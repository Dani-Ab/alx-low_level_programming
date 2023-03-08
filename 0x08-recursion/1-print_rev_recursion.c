#include "main.h"

/**
 * __print_rev_recursio -  prints a string in revers
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
