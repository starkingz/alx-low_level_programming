#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - reverse the content of an array of int
 * @a: array values
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j = 0;
	int *ab;

	ab = (int *) malloc(n * sizeof(int));
	n--;
	for (j = 0; j <= n; j++)
		ab[j] = a[n - j];

	for (j = 0; j <= n; j++)
		a[j] = ab[j];
}
