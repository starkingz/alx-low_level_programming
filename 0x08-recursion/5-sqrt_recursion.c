#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int b;

	b = _sqrt_recursion(1);
	printf("%d\n", b);
	b = _sqrt_recursion(1024);
	printf("%d\n", b);
	b = _sqrt_recursion(16);
	printf("%d\n", b);
	b = _sqrt_recursion(17);
	printf("%d\n", b);
	b = _sqrt_recursion(25);
	printf("%d\n", b);
	b = _sqrt_recursion(-1);
	printf("%d\n", b);

	return (0);
}
