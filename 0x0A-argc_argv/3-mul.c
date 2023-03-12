#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplication of two numbers
 *
 * @argc: argument count number
 * @argv: variables passed aruments
 *
 * Return: 0 sucesses 1 if failes
 */

int main(int argc, char *argv[])
{
	int a =atoi(argv[1]);
	int b = atoi(argv[2]);
	if (argc == 3)
	{
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error");
	return (1);
}
