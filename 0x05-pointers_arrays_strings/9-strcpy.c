#include "main.h"
#include <string.h>

/**
 * _strcpy - function that copies the string pointed to by src..
 * ..including the terminating null byte '\0' to the buffer pointed..
 * to by 'dest'
 * @dest: destination the pointer copies to
 * @src: copy string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
        unsigned long i = 0; /* size_t (a.k.a unsigned long int) */

	for (i = 0; i <= strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
