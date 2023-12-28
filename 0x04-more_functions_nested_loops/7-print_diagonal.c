#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int space, line;

	if (n <= 0)
		_putchar('\n');
	for (line = 0; line < n; line++)
	{
		for (space = 0; space < line; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
