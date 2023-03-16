#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: ements of array
 * @size: size of each array
 *
 * Return: pointer to the allocated memory if sucesses or NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int j;
	unsigned int i, n, m;
	unsigned int **arr;

	if ((nmemb <= 0) || (size <= 0))
		return (NULL);
	arr = malloc(nmemb * sizeof(unsigned int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = malloc(sizeof(unsigned int) * size);
			if (arr[i] == NULL)
			{
				for (j = i; j >= 0; j--)
				{
					free(arr[j]);
				}
				free(arr);
				return (NULL);
			}
	}
	for (n = 0; n  < nmemb; n++)
	{
		for (m = 0; m < size; m++)
		{
			arr[n][m] = 0;
		}
	}
	return (arr);
}
