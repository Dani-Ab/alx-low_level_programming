#include <stdio.h>
/**
 * main - Entry point a program that evaluate random number
 *
 * Return:always 0 (success)
 */

int main(void)
{
	char lc, uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}
	putchar('\n');
	return (0);
}
