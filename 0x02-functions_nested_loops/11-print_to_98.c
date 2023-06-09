#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n - 98
 * @n: input
 *
 */

void print_to_98(int n)
{
	int i = 0;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i < 98)
			printf(", ");
	}
	for (i = n; i > 97; i--)
	{
		if (n > 98)
			printf("%d", i);
		if (i > 98)
			printf(", ");
	}
	printf("\n");
}
