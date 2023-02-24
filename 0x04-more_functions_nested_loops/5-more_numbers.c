#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
	int i;
	int num = 0;

	for (i = 0 ; i <= 9 ; i++)
	{
		while (num <= 14)
		{
			if (num > 9)
				_putchar('0' + num / 10);
			_putchar('0' + num % 10);
			num++;
		}

		num = 0;
		_putchar('\n');
	}
}
