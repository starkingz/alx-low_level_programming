#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 0 through 9 digit
 *
 * Return: void
 */
void print_numbers(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		_putchar(digit);
		++digit;
	}
	_putchar('\n');
}
