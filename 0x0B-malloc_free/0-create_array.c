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
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
