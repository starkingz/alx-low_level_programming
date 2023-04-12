#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated spcace
 * Description: a funcntion that returns a pointer to a newly allocate
 * space in memory, which contains copy of the string giben as a paramaeter
 * @str: copy string
 * Return: duplicated string to pointer
 */

char *_strdup(char *str)
{
unsigned int a, b;
char *s;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		;
	a++;
	s = malloc(a * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		s[b] = str[b];
	}
	return (s);
}
