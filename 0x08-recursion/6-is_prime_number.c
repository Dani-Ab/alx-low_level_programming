#include "main.h"

/**
 * is_prime_number - find if number is prime
 * @n: input number to check
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (is_prime_cal(n, 2));
}

/**
 * is_prime_cal - assisit by Checkig number is prime
 * @n: input
 * @m: test input
 *
 * Return: 1  prime, 0 otherwise
 */

int is_prime_cal(int n, int m)
{
	if ((n % m == 0) && (m != (n / 2)))
		return (0);
	else if (m >= (n / 2))
		return (1);
	else
		return (is_prime_cal(n, m + 1));
}
