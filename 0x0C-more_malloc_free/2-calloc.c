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
	unsigned int i, m = 0;
	char *arr;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	m = nmemb * size;
	arr = malloc(m);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < m; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
