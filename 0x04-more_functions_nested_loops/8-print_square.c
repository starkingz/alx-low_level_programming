#include "main.h"

/**
 * print_square - prints a square with '#' character
 * @size: size of character to print
 *
 */

void print_square(int size)
{
	int sq_width, sq_height;

	if (size <= 0)
		_putchar('\n');
	for (sq_height = 1; sq_height <= size; sq_height++)
	{
		for (sq_width = 1; sq_width <= size; sq_width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
