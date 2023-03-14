#include <string.h>

/**
 * free_grid - concatinate two strings
 *
 * @grid: string one
 * @height: string two to be concatinat on s1
 * Return: pointer to a copy string  or NULL if its not sucesses
 */

void free_grid(int **grid, int height)
{
        unsigned int i = 0, n = 0, size1 = 0, size2 = 0, sizec = 0;
        char *ptr;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";
        size1 = strlen(s1);
        size2 = strlen(s2);
        sizec = size1 + size2 + 1;
        ptr = malloc(sizec * sizeof(char));
        if (ptr == NULL)
                return (NULL);
        while (s1[i] != '\0')
        {
                ptr[i] = s1[i];
                i++;
        }
        while (s2[n] != '\0')
        {
                ptr[i] = s2[n];
                i++;
                n++;
        }
        ptr[i] = '\0';
        return (ptr);
}
