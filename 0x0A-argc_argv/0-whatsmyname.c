#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the program name
 *
 * @argc: argument count number
 * @argv: variables passed aruments
 *
 * Return: 0 sucesses
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
