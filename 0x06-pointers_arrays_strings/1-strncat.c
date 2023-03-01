#include "main.h"

/**
 * _strncat - concatenates two strings with difined number
 * @dest : string input1
 * @src :string input2
 * @n : number input for concatenate from string2
 *
 * Return: concatinated sring
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
