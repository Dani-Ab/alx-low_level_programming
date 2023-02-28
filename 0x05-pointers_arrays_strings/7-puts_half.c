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
	char str2[n];

	m = (n - 1) / 2;
	for (i = 0; i <= m; i++)
	{
		str2[i] = str[m + 1];
		m++;
	}
	puts(str2);
}
