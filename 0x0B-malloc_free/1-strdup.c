#include "main.h"
#include <string.h>

/**
 * _strdup - return pointer to newly allocatd space
 *
 * @str: given string
 * Return: pointer to a copy string  or NULL if its not sucesses
 */

char *_strdup(char *str)
{
	unsigned int i = 0, size = 0;
	char *ptr;

	if (str == 0)
		return (NULL);
	size = (1 + strlen(str));
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = *(str + i);
		i++;
	}
	ptr[i + 1] = '\0';
	return (ptr);
}
