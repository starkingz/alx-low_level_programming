#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of the character
 * @str: input
 *
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;
	int len = 0;

	len = strlen(str);
	n = (strlen(str) + 1) / 2;

	/* If length of char is odd print starting from n */
	if (strlen(str) % 2 == 1)
	{
		for (i = n; i <= len - 1; i++)
		_putchar(str[i]);
	} else
	{
		for (i = len / 2; i <= len - 1; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
