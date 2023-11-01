#include <stdio.h>
#include <stdlib.h>

/**
 * main - find and print the sum of the even-valued fibonacci terms
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int current = 1;
	int previous = 0;
	int fn = 0;
	int i;
	int sum = 0; /* sum of even-valued fib terms */

	for (i = 0; i < 50; i++)
	{
		fn = previous + current;

		if (!(fn >= 4000000))
		{
			if (fn % 2 == 0)
				sum += fn;

			previous = current;
			current = fn;
		}
	}
	printf("%d\n", sum);
	return (0);
}
