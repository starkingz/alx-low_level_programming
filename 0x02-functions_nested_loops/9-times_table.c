#include "main.h"

/**
 * times_table - prints 9 times table
 */

void times_table(void)
{
	int row = 0;
	int col = 0;
	int mul;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			mul = row * col;
			if (mul > 9)
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			} else
			{
			_putchar(mul + '0');
			}

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n'); /* end of line */
	}
}
