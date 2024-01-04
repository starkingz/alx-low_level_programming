#include <stdio.h>

/**
 * main - test prime factors
 */
int main(void)
{
	int i;
	int result = 0;

	for (i = 1; i < 1231952; i++)
	{
		if (1231952 % i == 0)
			result = 1231952 / i;
	}
	printf("%d\n", result);

	return (0);
}
