#include <stdio.h>

/**
 * main - prints fibonacci sequence
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int long i;
	int long fibn;
	int long temp1, temp2;

	for (i = 1; i <= 98; i++)
	{
		if ((i == 1) || (i == 2))
			fibn = i;
		else
			fibn = temp1 + temp2;
		if ((i % 2) == 0)
			temp1 = fibn;
		else
			temp2 = fibn;
		printf("%lu", fibn);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
