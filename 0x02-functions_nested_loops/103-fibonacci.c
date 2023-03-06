#include <stdio.h>

/**
 * main - prints sum of even fibonacci sequence under 4,000,000
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int long i;
	int long fibn;
	int long temp1, temp2;
	int long sum = 0;

	for (i = 1; fibn < 4000000; i++)
	{
		if ((i == 1) || (i == 2))
			fibn = i;
		else
			fibn = temp1 + temp2;
		if ((i % 2) == 0)
			temp1 = fibn;
		else
			temp2 = fibn;
		if ((fibn % 2) == 0)
		{
			sum += fibn;
			printf("%lu\n", sum);
		}
	}
	return (0);
}
