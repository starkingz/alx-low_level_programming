#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two string
 * @dest: string to append src into
 * @src: string to copy
 * @n: number of byte(s) to copy from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = strlen(dest);
	int slen = strlen(src);
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i > slen)
		{
			dest[dlen + i] = '\0';
			break;
		}
		dest[dlen++] = src[i];
	}
	return (dest);
}
