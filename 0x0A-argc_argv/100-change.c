#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - return the number of change coins
 *
 * @argc: number of passed arguments
 * @argv: passed argumnet arrays
 *
 * Return: o (sucesses) 1  fails
 */

int main(int argc, char *argv[])
{
	int qr = 0, qrr = 0, di = 0, dir = 0, ni = 0;
	int nir = 0, pn2 = 0, pn = 0, cents = 0, Nocents = 0;
	unsigned int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (!(isdigit(argv[1][i])))
		{
			printf("0\n");
			return (0);
		}
	}
	cents = atoi(argv[1]);
	qr = (cents / 25);
	qrr = (cents % 25);
	di = qrr / 10;
	dir = qrr % 10;
	ni = dir / 5;
	nir = dir % 5;
	pn2 = nir / 2;
	pn = nir % 2;
	Nocents = qr + di + ni + pn2 + pn;
	printf("%d\n", Nocents);
	return (0);
}
