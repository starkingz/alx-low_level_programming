#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98: prints all natural numbers from 'n' to 98
 * @n: number to print
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i = 0;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (!(i >= 98))
		{
			printf(", ");
		}

	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (!(i <= 98))
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
