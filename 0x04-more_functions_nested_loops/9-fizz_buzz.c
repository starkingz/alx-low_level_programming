#include <stdio.h>
#include <stdlib.h>

/**
 * main - print a Fizz Buzz test
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int val;

	for (val = 1; val <= 100; val++)
	{
		if (val % 3 == 0 && val % 5 == 0)
			printf("FizzBuzz");
		else if (val % 3 == 0)
			printf("Fizz");
		else if (val % 5 == 0)
			printf("Buzz");
		else
			printf("%d", val);
		if (val < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
