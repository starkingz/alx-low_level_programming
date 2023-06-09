#include <stdio.h>

/**
 * main - Entry point
 * Description: computes and prints the sum of all ..
 * .. multiples of '3' or '5' below 1024 (excluded)
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, mul, mul2;
	int sum = 0;
	int sum2 = 0;

	for (n = 1; n < 1024; n++)
	{
		mul = 3 * n;
		if (mul < 1024)
			sum += mul;

		mul2 = 5 * n;
		if (mul2 < 1024)
			sum2 += mul2;
	}
	printf("%d\n", sum + sum2);
	return (0);
}
