#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * Description: a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size in bytes
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int g;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);
	if (b == NULL)
		return (NULL);
	for (g = 0; g < (nmemb * size); g++)
		b[g] = 0;
	return (b);
}
