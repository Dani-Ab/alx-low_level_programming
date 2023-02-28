#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half -prints half of a string
 * @str : passed string
 *
 */
void puts_half(char *str)
{
	int n, m, i;

	n = strlen(str);
	m = (n - 1) / 2;
	for (i = m + 2; i <= n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
