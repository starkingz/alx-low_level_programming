#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - find and prints value if positive, negative or zero
 * @i: argument to pass
 *
 * Return: always 0 (success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
