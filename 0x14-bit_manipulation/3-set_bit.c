#include "main.h"

/**
 * set_bit - set the value of a bit at a given index
 * @n: decimal input
 * @index : reqired bit indext
 *
 * Return: 1 for success -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8)))
		return (-1);
	*n |= 1 << index;
	if (n)
		return (1);
	else
		return (-1);
}
