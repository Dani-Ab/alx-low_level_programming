#include "main.h"

/**
 * print_rev - prints a string, in reverse order
 * @s: input string.
 */

void print_rev(char *s)
{
	int n;
	int temp;
	int i;

	n--;
	for (i = 0;  i < n ; i++)
	{
		temp = s[i];
		s[i] = s[n];
		s[n] = temp;
		n--;
	}
}
