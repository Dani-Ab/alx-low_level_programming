#include "main.h"
#include <string.h>
/**
 * _strncpy - concatenates two strings with difined number
 * @dest : string input1
 * @src :string input2
 * @n : number input for string2
 *
 * Return: copy sring
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
