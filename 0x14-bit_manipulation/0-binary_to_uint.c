#include "main.h"

/**
 * binary_to_uint - change binary to unsigned integer
 * @b: pointer to a string
 *
 * Return: number or 0 if failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, n = 0, slen = 0, i = 0;

	slen = stlen(b);
	n = slen - 1;
	if (b == NULL)
		return (0);
	while (i < slen)
	{
		if ((b[n] != 48) && (b[n] != 49))
			return (0);
		if (b[n] == 49)
			sum += 1 << i;
		i++;
		n--;
	}
	return (sum);
}
/**
 * stlen- calculate string length
 * @bistr: input string
 *
 * Return: string length
 */

int stlen(const char *str)
{
	int count, i =0;

	for (count = 0; str[i] != '\0'; i++)
	{
		++count;
	}
	return (count);
}
