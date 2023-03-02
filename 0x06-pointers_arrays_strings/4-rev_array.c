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
	int i;
	int cary;

	n = n - 1;
	for (i = 0; i < 0; i++)
	{
		cary = a[i];
		a[i] = a[n];
		a[n] = cary;
		n--;
	}
}
