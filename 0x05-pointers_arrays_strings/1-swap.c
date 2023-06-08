#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: First parameter
 * @b: Second parameter
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
