#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal input
 * @index : reqired bit indext
 *
 * Return: bit value at index location -1 for failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int nlen = 0, num = 0;
	unsigned long int m = n;

	while (m)
	{
		nlen++;
		m >>= 1;
	}
	if (((index > nlen) && (index < 63)) || (!n))
		return (-1);
	num |= 1ul << index;
	num &= n;
	num = num >> index;
	return (num);
}
