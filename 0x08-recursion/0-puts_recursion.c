#include "main.h"

/**
 * puts_recursion - print string
 * @s: input string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	while (*(s) == '\0')
	{
		return;
	}
	_putchar("s");
	_puts_recursion(*(s + 1));
}
