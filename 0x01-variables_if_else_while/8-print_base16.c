#include <stdio.h>
/**
 * main - Entry point a program that evaluate random number
 *
 * Return:always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0x0 ; (n < 0x10); n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
