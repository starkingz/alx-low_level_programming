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

	len = strlen(str);
	n = len / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	if (len % 2 != 0)
		_putchar(str[len - 1]);
	_putchar('\n');
}
