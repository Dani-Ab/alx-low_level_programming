#include "main.h"

/**
 * _isupper - check the inputes if its uppercase character or note.
 * @c: input uppercase character
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
