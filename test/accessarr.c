#include <stdio.h>

/**
 * main - Accessing an array with its elements
 *
 * Return: Always 0
 */
int main(void)
{
	int a[5];

	a[0] = 496;
	a[1] = 345;
	a[2] = 977;
	a[3] = 364;
	a[4] = 123;

	int i = 0;

	while (i < 5)
	{
		printf("Value of a[%d]: %d\n", i, a[i]);
		i++;
	}
	int j = 0;

	while (j < 5)
	{
		printf("Address of 'a[%d]': %p\n", j, &(a[j]));
		j++;
	}

	return (0);
}
