#include "main.h"
/**
 * print_times_table - prints 'n' times table
 * @n: input
 */
void print_times_table(int n)
{
	int row = 0, col = 0, mul, mul2;

	if (!((n > 15) || (n < 0)))
	{
		for (col = 0; col <= n; col++)
		{
			for (row = 0; row <= n; row++)
			{
				mul = row * col;
				if (mul <= 9)
				{
					if (row > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(mul % 10 + '0');
				} else if ((mul > 9) && (mul <= 99))
				{
					_putchar(' ');
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
				} else if (mul > 99)
				{
					_putchar(mul / 100 + '0');
					 mul2 = mul / 10;
					_putchar(mul2 % 10 + '0');
					_putchar(mul % 10 + '0');
				}
				if (row < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
