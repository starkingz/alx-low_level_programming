#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,..
 * ..starting with the first character
 * @s: input
 *
 */

void puts2(char *s)
{
	int i = 0;
	int str_len = 0;

	str_len = strlen(s) - 1;/*Assign length of string without escape value*/
	for (i = 0; i <= str_len; i++)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}
	_putchar('\n');
}
