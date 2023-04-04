#include "main.h"

/**
 * _memcpy - function thaat copies memory area
 * @dest: memory stored
 * @src: memory copied
 * @n: number of bytes stored
 * Return: copied memory with n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		b--;
	}
	return (dest);
}