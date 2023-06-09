#include "main.h"

/**
 * _puts - prints strings to stdout followed by a newline
 * @str: character to print
 *
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);
	_putchar('\n');
}
