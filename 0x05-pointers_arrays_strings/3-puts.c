#include "main.h"
#include <string.h>  /* for strlen */

/**
 * _puts - prints each char to stdout
 * @str: char to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	int len = strlen(str);   /* c libary */

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
