#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 *
 * return: void
 */
void more_numbers(void)
{
	int digit = 0;
	int row;

	for (row = 0; row < 10; row++)
	{
		for (digit = 0; digit < 15; digit++)
		{
			if (digit >= 10)
				_putchar(digit / 10 + '0');
			_putchar(digit % 10 + '0');
		}
		_putchar('\n');
	}
}
