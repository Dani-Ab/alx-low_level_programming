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
	if (n % 2 == 0)
		m = n / 2;
	else
		m = (n - 1) / 2;
	for (i = m + 2; i <= n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
