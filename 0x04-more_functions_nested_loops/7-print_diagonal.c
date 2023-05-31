#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draw a giagonal line on the terminal
 * @n: input of line to be drawn
 *
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(32);
		}
		_putchar('\\');
		_putchar('\n');
	}
}
