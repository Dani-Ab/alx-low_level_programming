#include "main.h"

/**
  * rev_string - Reverses a given string
  * @s: given string
  *
  * Return: othing
  */

void rev_string(char *s)
{
	int i;
	int j = 0;
	char r;

	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j / 2; i++)
	{
		r = *(s + i);
		*(s + i) = *(s + j - i - 1);
		*(s + j - i - 1) = r;
	}
	*(s + j++) = '\0';
}
