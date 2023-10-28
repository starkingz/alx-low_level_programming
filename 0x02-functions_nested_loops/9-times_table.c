#include "main.h"

/**
 * times_table - prints 9 times table starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int mul;
	int mulcand;
	int product = 0;

	for (mul = 0; mul <= 9; ++mul)
	{
		for (mulcand = 0; mulcand <= 9; ++mulcand)
		{
			product = mulcand * mul;
			if (product <= 9)
			{
				if (mulcand > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
			_putchar('\n');
	}
}
