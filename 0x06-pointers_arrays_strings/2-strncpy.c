#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copy string
 * @dest: string to paste
 * @src: string to copy
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return dest;
}
