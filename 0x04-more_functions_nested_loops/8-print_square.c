#include "main.h"

/**
 *print_square - prints a square
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int row, cha;

	if (size <= 0)
		_putchar('\n');
	for (row = 1; row <= size; row++)
	{
		for (cha = 1; cha <= size; cha++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
