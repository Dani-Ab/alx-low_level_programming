#include "main.h"

/**
 * _isdigit - check the inputes if its a number or note.
 * @c: input alphabet
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
