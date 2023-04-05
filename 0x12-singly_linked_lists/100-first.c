#include <stdio.h>
void before_main(void)__attribute__((constructor));

/**
 * before_main - Prints a string before main function executed.
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n")
}
