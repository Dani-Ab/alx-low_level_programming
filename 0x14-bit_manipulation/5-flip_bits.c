#include "main.h"
/**
 * flip_bits - gives number of bits filip to change one number to other
 * @n: input number 1
 * @m: input number 2
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numand, numor;
	unsigned int setand, setor;

	numand = n & m;
	setand = set_bits(numand);
	numor = n | m;
	setor = set_bits(numor);
	return (setor - setand);
}
/**
 * set_bits - calculates the number of set bits in a number
 * @i: input number to be checked
 *
 * Return: Number of set bits
 */

unsigned int set_bits(unsigned long int i)
{
	unsigned long int count = 0;

	while (i)
	{
		count += i & 1;
		i >>= 1;
	}
	return (count);
}
