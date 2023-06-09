#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: return parameter
 *
 * Return: number of the string not null
 */

int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != 0; i++)
		len++;
	return (len);
}
