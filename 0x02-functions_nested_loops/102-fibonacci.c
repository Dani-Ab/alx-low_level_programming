#include <stdio.h>

/**
 * main - prints fibonacci sequence
 *
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int fibn;
	int temp1, temp2;

	for (i = 1; i <= 50; i++)
	{
		if ((i == 1) || (i == 2))
			fibn = i;
		else
			fibn = temp1 + temp2;
		if ((i % 2) == 0)
			temp1 = fibn;
		else
			temp2 = fibn;
		printf("%d, ", fibn);
	}
	printf("\n");
	return (0);
}
