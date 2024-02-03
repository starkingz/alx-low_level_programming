#include <stdio.h>

/**
 * main - print the address of an array and the size of an array
 *
 * Return: Always 0
 */
int main(void)
{
	char c[98];

	printf("Value of (address of) c: %p\n", c);
	printf("Address of &c: %p\n", &c);
	printf("Size of c (c[*]): %lu\n", sizeof(c));
	printf("Size of &c (c[*][98]): %lu\n", sizeof(&c));

	return (0);
}
