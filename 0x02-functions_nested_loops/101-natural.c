#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes sum of all the multiples of 3 or 5
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int sum = 0;
	int n = 0;

	for (n = 1; n < 1024; ++n)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
