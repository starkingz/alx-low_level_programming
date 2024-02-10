#include"main.h"

/**
 * swap_int - swap two int variables using deferencing
 * @a: first pointer
 * @b: second pointer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
