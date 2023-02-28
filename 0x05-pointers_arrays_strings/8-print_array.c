#include "main.h"

/**
 * print_array - print array elements in order
 *
 * @a : array pointer
 * @n : array size
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}
