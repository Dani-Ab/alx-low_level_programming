#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - print sum of giver numbers
 *
 * @argc: argument count number
 * @argv: pointer of passed arument array
 *
 * Return: 0 sucesses 1 if failes
 */

int main(int argc, char *argv[])
{
	unsigned int j;
	int i = 1, n = 0, sum = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		while (i < argc)
		{
			n = atoi(argv[i]);
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error");
					return (1);
				}
			}
			sum += n;
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
