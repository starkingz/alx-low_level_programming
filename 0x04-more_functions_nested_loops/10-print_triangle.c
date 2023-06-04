#include "main.h"

/**
 * print_triangle - prints a triangle with '#' character
 * @size: input
 *
 */

void print_triangle(int size)
{
	int height, space_char, pound_sym;

	if (size <= 0)
		_putchar('\n');
	for (height = 1; height <= size; height++)
	{
		for (space_char = size; space_char > height; space_char--)
			_putchar(' ');
		for (pound_sym = 1; pound_sym <=  height; pound_sym++)
			_putchar('#');
		_putchar('\n');
	}
}
