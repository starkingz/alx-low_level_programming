#include "main.h"

/**
 * print_times_table - print input times table starting with 0
 * @n: argument
 *
 * Return: void
 */
void print_times_table(int n)
{
	int mul;
	int mulcand;
	int prod = 0;
	int div = 0;
	int mod = 0;
	if (n < 15 && n > 0)
	{
	for (mul = 0; mul <= n; ++mul)
	{
		for (mulcand = 0; mulcand <= n; ++mulcand)
		{
			prod = mulcand * mul;
			div = prod / 10;
			mod = prod % 10;

			if (prod <= 9)
			{
				if (mulcand > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mod + '0');
			}
			else if (prod > 9 && prod <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(div + '0');
				_putchar(mod + '0');
		        }
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(div / 10 + '0');
				_putchar(div % 10 + '0');
				_putchar(mod + '0');
			}
		}
		_putchar('\n');
	}
	}
}
