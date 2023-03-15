#include "main.h"
#include <stdio.h>

/**
 * main - print argumet count
 *
 * @argc : number of arguments passed
 * @argv : passed argumets
 * Return: 0(sucesses)
 */

int main(int argc, char *argv[])
{
	char *s;

	s = argv[0];
	if (argc > 0)
		printf("%d\n", argc - 1);
	argv[0] = s;
	return (0);
}
