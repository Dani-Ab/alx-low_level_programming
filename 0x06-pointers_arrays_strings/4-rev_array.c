#include "main.h"

/**
 * reverse_array - print integer array in reverse
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, m;

	i = n - 1;
	while (i >= 0)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		/*m = a[i];*/
		_putchar(a[i]);
		i--;
	}
	_putchar('\n');
}
