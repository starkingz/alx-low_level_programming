#include <stdio.h>
#include <stdlib.h>

/**
 * main - print 50 fibonacci numbers starting with 1 and 2
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long int previous = 0;
	long int current = 1;
	long int sum = 0;
	int i;

	for (i = 1; i <= 50; ++i)
	{
		sum = previous + current;
		printf("%ld", sum);

		if ((i < 50))
			printf(", ");

		previous = current;
		current = sum;
	}
	printf("\n");
	return (0);
}
