#include "main.h"


/**
 * _memcpy - copy a memory area
 * @dest: memory area place to be copied on
 * @src: memory area to copy
 * @n: number of bytes
 * Return: pointer to copied bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cpy = dest;

	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	return (cpy);
}
