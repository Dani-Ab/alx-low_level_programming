#include "main.h"

/**
 * puts_recursion - print string
 * @s: input string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*(s) == '\0')
		_putchar('\n');
		return;
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
