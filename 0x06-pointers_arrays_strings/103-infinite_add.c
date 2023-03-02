#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: string number 1
 * @n2: string number 2
 * @r: buffer to store result
 * @size_r: buffer size
 * return: sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int add1 = 0, add2 = 0, addS = 0;

	while (*(n1 + add1++))
		;
	while (*(n2 + add2++))
		;
	printf("%d, %d\n", add1, add2);
	return (r);
}
