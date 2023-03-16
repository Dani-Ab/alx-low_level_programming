#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatinate two strings with specified bytes
 * @s1: first string
 * @s2: second string
 * @n: concatinate byte length
 *
 * Return: pointer of new string if sucesses or NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, sLng1, sLng2, k;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	sLng1 = strlen(s1);
	sLng2 = strlen(s2);
	if (n >= sLng2)
		n = sLng2;
	k = sLng1 + n;
	ptr = malloc(k * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while ((s2[j] != '\0') && (j < (n)))
	{
		ptr[i] = s2[(j)];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
