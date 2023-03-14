#include "main.h"
#include <string.h>

/**
 * alloc_grid - return two dimensional array
 *
 * @width: width of 2d array
 * @height: height of 2d array
 * Return: pointer to two dimensional array or NULL if its not sucesses
 */

int **alloc_grid(int width, int height)
{
	unsigned int i, j, m;
	int *arr[width];

	for (i = 0; i < width; i++)
		arr[i] = (int *)malloc(height * sizeof(int));
	if ((arr == NULL) || ((width <= 0) || (height <= 0)))
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
			_putchar('\n');
		}
	}
	return (0);
}
