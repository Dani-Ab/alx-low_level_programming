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
	int i, n, m;
	int **arr;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
			if (arr[i] == NULL)
			{
				free(arr);
				return (NULL);
			}
	}
	for (n = 0; n  < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			arr[n][m] = 0;
		}
	}
	return (arr);
}
