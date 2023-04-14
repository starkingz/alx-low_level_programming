#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 * Description: a function that creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 * Return: pointer to newly allocated memory
 */
int *array_range(int min, int max)
{
	int g, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (g = 0; g < l; g++, min++)
	{
		a[g] = min;
	}
	return (a);
}
