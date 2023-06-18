#include "main.h"
#include <stdio.h>

/**
 * print_array - prints 'n' elements of array of integers
 * @a: input of the array
 * @n: elements of the array
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
