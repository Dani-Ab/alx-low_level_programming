#include "main.h"

/**
 * _islower - comparing a caracter to c
 * c Parameter comparing  member
 *
 * Return: 0 (not success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
