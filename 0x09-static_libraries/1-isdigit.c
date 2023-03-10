#include <string.h>
#include "main.h"

/**
 * _isdigit - check the inputes if its a digit ot note.
 * @c: input digit
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
