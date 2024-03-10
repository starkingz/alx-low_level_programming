#include "main.h"
#include <string.h>

/**
 * _strcat -concanates two strings
 * @dest:first input
 * @src: second input
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen;
	int i;

	dlen = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';

	return (dest);
}
