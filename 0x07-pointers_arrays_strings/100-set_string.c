#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointerr to pointer to change
 * @to: pointer value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
