#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if Big endian 1 little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *ch = (char *)&i;

	if (*ch)
		return (1);
	else
		return (0);
}
