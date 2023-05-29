#include "main.h"

/**
 * print_numbers - prints digit from 0 to 9
 *
 * Return: 0 success
 */

void print_numbers(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
