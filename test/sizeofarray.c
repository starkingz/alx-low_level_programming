#include <stdio.h>

/**
 * main - printing the size of an array
 *
 * Return: Always 0
 */
int main(void)
{
	int a[10];
	char c[10];

	printf("Size of a array: %lu\n", sizeof(a));
	printf("Size of c array: %lu\n", sizeof(c));

	return (0);
}
