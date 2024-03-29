#include "function_pointers.h"

/**
 * int_index - search int in an array
 * @array: array to do thesearch
 * @size: size of array
 * @cmp: function that compares an int
 *
 * Return: index of int or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
