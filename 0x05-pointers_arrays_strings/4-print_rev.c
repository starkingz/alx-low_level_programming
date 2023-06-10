#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse
 * @str: character to print
 *
 */

void print_rev(char *str)
{
	int i;
	int last_value;

	/* store last value of the string */
	last_value = strlen(str) - 1;

	for (i = last_value; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
