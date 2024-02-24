#include <string.h>

/**
 * _strcpy - copies the string pointed to by src
 * Description: copy including the terminating null byte ('\0')
 * @dest: char to return
 * @src: value to copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);
	for (i = 0; i < len && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < len; i++)
		dest[i] = '\0';
	return (dest);
}
