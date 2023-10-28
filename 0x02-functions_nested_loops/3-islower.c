#include "main.h"
#include <stdio.h>

/**
 * _islower - check for lowercase alphabet
 * @c: char to check
 *
 * Return: 1 if true else 0 if false
 */
int _islower(int c)
{
	int lower;

	for (lower = 97; lower <= 112; ++lower)
	{
		if (c == lower)
			return (1);
	}
	return (0);
}
