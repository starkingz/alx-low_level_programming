#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s) - 1;   /* no '\0' char */
	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
