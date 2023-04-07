#include "main.h"

/**
 * clear_bit - set the value of a bit at a given index to 0
 * @n: decimal input
 * @index : reqired bit indext
 *
 * Return: 1 for success -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8)))
		return (-1);
	*n &= ~(1 << index);
	if (!n)
		return (1);
	else
		return (-1);
}
