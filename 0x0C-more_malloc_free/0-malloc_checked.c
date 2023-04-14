#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * Description: a function that allocates memory using malloc.
 * @a: memory to allocate
 * Return: pointer to allocated memory or normal process termination if error
 */
void *malloc_checked(unsigned int a)
{
	void *s;

	s = malloc(a);
	if (s == NULL)
		exit(98);
	return (s);
}
