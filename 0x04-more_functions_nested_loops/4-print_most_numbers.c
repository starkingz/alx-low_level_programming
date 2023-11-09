#include "main.h"

/**
 * print_most_numbers - print decimal numbers except 0 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')
			_putchar(n);
		++n;
	}
	_putchar('\n');
}
