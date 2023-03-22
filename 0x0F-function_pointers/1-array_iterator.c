#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print array element
 *
 * @array: arraywith printing elelment
 * @size: size of array
 * @action: function to print an array
 *
 * Return: noting
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
