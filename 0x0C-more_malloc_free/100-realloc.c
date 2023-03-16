#include "main.h"
#include <string.h>

/**
 * _realloc - reallocat memory with new size
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size of the old allocated space
 * @new_size: the size of the new alcated space
 *
 * Return: pointer to two dimensional array or NULL if its not sucesses
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j;
	char *arr, *o_arr;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	arr = malloc(new_size);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	o_arr = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			arr[i] = o_arr[i];
		}
	}
	if (new_size < old_size)

	{
		for (j = 0; j < new_size; j++)
		{
			arr[j] = o_arr[j];
		}
	}
	free(ptr);
	return (arr);
}
