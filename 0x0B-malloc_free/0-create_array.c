#include "main.h"

/**
 * create_array - an aarray of characters
 *
 * @size: size of charactres for dynamic memory
 * @c: intialiing character
 *
 * Return: pointer to and array  or NULL if its not sucesses
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	int *ptr;
	
	while (i <= size)
	{
		ptr = malloc(sizeof(char) * size);
		if (ptr == 0)
			return (NULL);
		ptr[i] = c;
		i++;
	}
	free(ptr);
	return (0);
}
