#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 ...
 * ... msking 2 and 4 an exception
 *
 */

void print_most_numbers(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || i == '4'))
			_putchar(i);
	}
	_putchar('\n');
}
