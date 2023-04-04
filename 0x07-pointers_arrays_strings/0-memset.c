#include <stdio.h>

/**
 * _memset - set the block  memory with a specific value
 * @s: array set
 * @b: Value to be set with a
 * @n: number of bytes
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s); /* Return pointer to the memory area s */
}
