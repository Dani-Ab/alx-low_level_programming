#include "main.h"
#include <string.h>

/**
 * array_range - creat array of intigers
 * @min: array minimum number
 * @max: marray maximum integer
 *
 * Return: pointer to the allocated memory if sucesses or NULL if fails
 */

int *array_range(int min, int max)
{
	int i = 0, range = 0;
	int *arr;

	if (min > max)
		return (NULL);
	range = ((max - min) + 1);
	arr = malloc(range * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	while ((min <= max))
	{
		arr[i] =  min;
		i++;
		min++;
	}
	return (arr);
}
