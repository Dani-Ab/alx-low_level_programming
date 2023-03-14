#include "main.h"
#include <string.h>

/**
 * str_concat - concatinate two strings
 *
 * @s1: string one
 * @s2: string two to be concatinat on s1
 * Return: pointer to a copy string  or NULL if its not sucesses
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, n = 0, size1 = 0, size2 = 0, sizec = 0;
	char *ptr;

	size1 = (0 + strlen(s1));
	size2 = (0 + strlen(s2));
	sizec = size1 + size2 + 1;
	ptr = malloc(sizec * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = *(s1 + i);
		i++;
	}
	while (s2[n] != '\0')
	{
		ptr[i] = *(s2 + n);
		i++;
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
