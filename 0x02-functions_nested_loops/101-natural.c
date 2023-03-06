#include <stdio.h>

/**
 * main - priint the sum of all multiple of 3 & 5 under 1024
 *
 *
 *
 * Return : always  0 (sucsess)
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum = sum + i;
	}
	return (0);
}
