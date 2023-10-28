#include "main.h"
/**
 * print_times_table - print input times table starting with 0
 * @n: argument
 * Return: void
 */
void print_times_table(int n)
{
	int mul, mulcand;

if (n <= 15 && n >= 0)
{
	for (mul = 0; mul <= n; ++mul)
	{
		_putchar('0');
		for (mulcand = 1; mulcand <= n; ++mulcand)
		{
			int prod = mulcand * mul;
			int div = prod / 10;
			int mod = prod % 10;

			_putchar(',');
			_putchar(' ');
			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mod + '0');
			}
			else if (prod <= 99)
			{
				_putchar(' ');
				_putchar(div + '0');
				_putchar(mod + '0');
			}
			else
			{
				_putchar(div / 10 + '0');
				_putchar(div % 10 + '0');
				_putchar(mod + '0');
			}
		}
		_putchar('\n');
	}
}
}
