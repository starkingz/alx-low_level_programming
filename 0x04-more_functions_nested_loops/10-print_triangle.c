#include "main.h"

/**
 * print_triangle - print triangle using '#' character
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, spa, cha;

	if (size <= 0)
		_putchar('\n');
	for (row = size; row >= 1; row--)
	{
		for (spa = row; spa > 1; spa--) /* Go down */
		{
			_putchar(' ');
		}
		for (cha = row; cha <= size; cha++) /* Go up */
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
