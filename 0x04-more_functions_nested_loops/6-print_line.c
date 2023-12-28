#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the charactar '_' should be drawn
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
