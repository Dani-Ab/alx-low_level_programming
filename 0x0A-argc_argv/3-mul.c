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
	(void) argc;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
