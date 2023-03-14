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

	ptr = malloc(size * sizeof(char));
	if ( size == 0)
                return (NULL);
       	if (ptr == NULL)
                        return (NULL);
        while (i < size)
        {
                ptr[i] = c;
                i++;
        }
        return (ptr);
}

{
        char *str;
        unsigned int i;

        str = malloc(sizeof(char) * size);
        if (size == 0 || str == NULL)
                return (NULL);
        for (i = 0; i < size; i++)
                str[i] = c;
        return (str);
}
