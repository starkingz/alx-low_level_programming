#include <stdio.h>

/**
 * main - Entry poinr
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 1;

	for (n = 1; n <= 100; ++n)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf(" FizzBuzz");
		else if (n % 3 == 0)
			printf(" Fizz");
		else if (n % 5 == 0)
			printf(" Buzz");
		else if (n == 1)
			printf("%d", n);
		else
			printf(" %d", n);
	}
	putchar('\n');
	return (0);
}
