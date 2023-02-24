#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	long  num = 612852475143;
	long prm;

	for (prm = 2; prm < num; prm++)
	{
		if (num % prm == 0)
			num /= prm;
	}
	printf("%li\n", num);
	return (0);
}
