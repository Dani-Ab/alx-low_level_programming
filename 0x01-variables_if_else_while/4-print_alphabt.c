#include <stdio.h>
/**
 * main - Entry point a program that evaluate random number
 *
 * Return:always 0 (success)
 */

int main(void)
{
	char lc;
	
	for (lc = 'a'; (lc <= 'z') && (lc != 'e' || lc != 'q'); lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
