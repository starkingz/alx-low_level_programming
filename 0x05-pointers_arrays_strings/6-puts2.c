#include "main.h"
#include <string.h>

/**
 * puts2 - print string by even number, starting from the first one
 * @s: string to print
 *
 * Return: void
 */
void puts2(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i+=2)
		_putchar(s[i]);
	_putchar('\n');
}
