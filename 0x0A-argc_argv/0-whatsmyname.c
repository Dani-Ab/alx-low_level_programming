#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the program name
 * argc: argumet count number
 * argv: variable argumets passed
 *
 * Return: 0 sucesses
 */

int main(int argc,char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
