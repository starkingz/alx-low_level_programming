#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, i2;

	for (i = 0; i <= 9; i++)
	{
		for (i2 = 0; i2 <= 14; i2++)
		{
			if (i2 > 9)
				_putchar(i2 / 10 + '0');
			_putchar(i2 % 10 + '0');
		}
		_putchar('\n');
	}
}
