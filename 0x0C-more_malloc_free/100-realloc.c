#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory
 * Desciption:  a function that reallocates a memory block using malloc
 * @ptr: pointer to previously allocated memory
 * @osize: size of allocated
 * @nsize: size
 * Return: pointer to newly allocated memory, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int osize, unsigned int nsize)
{
	char *p;
	unsigned int g, max = nsize;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(nsize);
		return (p);
	}
	else if (nsize == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (nsize == osize)
		return (ptr);

	p = malloc(nsize);
	if (p == NULL)
		return (NULL);
	if (nsize > osize)
		max = osize;
	for (g = 0; g < max; g++)
		p[g] = oldp[g];
	free(ptr);
	return (p);
}
