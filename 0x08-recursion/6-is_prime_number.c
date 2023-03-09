#include "main.h"

/**
 * is_prime_number - find if number is prime
 * @n: input number to check
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n > 1)
		return (prime_cal(n, 2));
	else if (n < 0)
		return (0);
	return (0);
}

/**
 * prime_cal - assisit by Checkig number is prime
 * @n: input
 * @m: test input
 *
 * Return: 1  prime, 0 otherwise
 */

int prime_cal(int n, int m)
{
	if ((n % m == 0) && (m != (n / 2))
		return (0);
	else if (m >= (n / 2))
		return (1);
	else
		return (prime_cal(n, m + 1));
}
