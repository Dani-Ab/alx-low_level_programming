#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments passed to it
 *
 * @argc: argument count number
 * @argv: variables passed aruments
 *
 * Return: 0 sucesses
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
