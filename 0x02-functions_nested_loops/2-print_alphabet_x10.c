#include "main.h"

/**
 * print_alphabet_x10 - lower case  a to z ten times
 */

void print_alphabet_x10(void)
{
	char alpha;
	int n = 0;

	while (n < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		n++;
		_putchar('\n');
	}
}
