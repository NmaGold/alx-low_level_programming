#include "main.h"

/**
 * more_numbers - function that prints ten times the numbers
 * from 0 to 14, followed by a new line
 */

void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 1; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
