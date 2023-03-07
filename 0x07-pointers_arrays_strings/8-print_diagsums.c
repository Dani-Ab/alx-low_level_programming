#include "main.h"

/**
 * print_diagsums - print sum of 2d square array of ints
 * @a: pointer to 2d array
 * @size: size of the array
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;
	int mult;

	i = 0;
	sum1 = sum2 = 0;
	mult = size * size;
	while (i < mult)
	{
		if (i % (size - 1) == 0 && i < mult - 1 && i > 0)
			sum2 += *(a + i);
		if (i % (size + 1) == 0 || i == 0)
			sum1 += *(a + i);
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
