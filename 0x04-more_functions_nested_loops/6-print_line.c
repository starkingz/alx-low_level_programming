#include "main.h"

/**
 * print_line - function that prints a straight line in the terminal
 * @n: character pf the straight line
 *
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
		if (n <= 0)
			_putchar('\n');
	}
		_putchar('\n');
}
