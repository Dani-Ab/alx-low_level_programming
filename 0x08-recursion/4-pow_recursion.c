#include "main.h"

/**
 * _pow_recursion - calculate base raised by exponet
 * @x: input number base
 * @y: input number Exponent
 *
 * Return: base to the power of exponet
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
