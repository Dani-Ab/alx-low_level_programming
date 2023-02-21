#include "main.h"

/**
 * int _islower unction that checks for lowercase characte
 *
 * c checked member
 * Return: else  0 ( not success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
