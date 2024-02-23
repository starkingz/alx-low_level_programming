#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, n;

	len = strlen(str) - 1;
	n = len / 2;

	for (i = n + 1; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
