#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - random valid passwords
 *
 * Return: Always 0 (sucesse
 */

int main(void)
{
	int passwd;

	srand(time(NULL));
	passwd = (rand() % 100);
	printf("%c", passwd);
	return (0);
}
