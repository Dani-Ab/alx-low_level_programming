#include "main.h"

/**
  * rev_string - Reverses a given string
  * @s: given string
  *
  * Return: othing
  */

void rev_string(char *s)
{
	int i, n, m;
	char *c, temp;

	c = s;

	while (s[n] != '\0')
	{
		n++;
	}

	for (m = 1; m < n; m++)
	{
		c++;
	}

	for (i = 0; i < (n / 2); i++)
	{
		temp = s[i];
		s[i] = *c;
		*c = temp;
		c--;
	}
}
