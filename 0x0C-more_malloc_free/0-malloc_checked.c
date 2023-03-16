#include "main.h"

/**
 * malloc_checked - allocate memory for given size
 *
 * @b: required intger number
 *
 * Return: pointer addres if sucess 98 if fails
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

