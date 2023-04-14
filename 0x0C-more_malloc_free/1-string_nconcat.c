#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int g, h, k;
	char *s;

	if (s1 == NULL)
		g = 0;
	else
	{
		for (g = 0; s1[g]; g++)
			;
	}
	if (s2 == NULL)
		h = 0;
	else
	{
		for (h = 0; s2[h]; h++)
			;
	}
	if (h > n)
		h = n;
	s = malloc(sizeof(char) * (g + h + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < g; k++)
		s[k] = s1[k];
	for (k = 0; k < h; k++)
		s[k + g] = s2[k];
	s[g + h] = '\0';
	return (s);
}
