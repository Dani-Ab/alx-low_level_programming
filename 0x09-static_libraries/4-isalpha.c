#include "main.h"
/**
 * _isalpha - a check aphabet
 * @c: commparing character
 * Return: 0 unsuccess
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
