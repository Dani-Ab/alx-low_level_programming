#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_name - prints a name
 *
 * @name: passed name
 * @f : function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		(*f)(name);
}
