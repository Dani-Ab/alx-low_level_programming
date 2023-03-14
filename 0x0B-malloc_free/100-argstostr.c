#include "main.h"
#include <string.h>

/**
 * argstostr- concatinate argumentss
 *
 * @ac: argument number
 * @av: string two to be concatinat on s1
 * Return: pointer to a copy string  or NULL if its not sucesses
 */

char *argstostr(int ac, char **av)
{
	unsigned int i = 0, j = 0, n = 0, m = 0, size = 0;
	char *ptr;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	while (i < ac)
	{
		size += strlen(av[i]);
		i++;
	}
	ptr = malloc(size * sizeof(char) + ac + 1);
	if (ptr == NULL)
		return (NULL);
	while (av[n])
	{
		while (av[n][j])
		{
			ptr[m] = av[n][j];
			n++;
			m++;
		}

		ptr[m] = '\n';
		j = 0;
		m++;
		n++;
	}
	m++;
	ptr[m] = '\0';
	return (ptr);
}
