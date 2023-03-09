#include "main.h"

/**
 * _sqrt_recursion - return natural sqare root
 * @n: input number
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_ass(n, 1));
}

/**
 * _sqrt_ass - find square root
 * @n: number to find square root
 * @i: number of iterations
 * Return: square root or -1 if not found
 */
int _sqrt_ass(int n, int i)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else if (n / i == i && (n % i == 0))
		return (i);
	else if (i < n)
		return (_sqrt_ass(n, i + 1));
	return (-1);
}
