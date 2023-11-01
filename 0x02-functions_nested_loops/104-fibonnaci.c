#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 98 fibonnaci numbers starting with 1 and 0
 *
 * Return: always 0 (success)
 */
int main(void)
{
	double prev_fn = 0;
	double curr_fn = 1;
	double fn = 0;
	int i = 0;

	for (i = 1; i <= 98; ++i)
	{
		fn = prev_fn + curr_fn;

		printf("%f", fn);

		if ((i <= 97))
			printf(", ");

		prev_fn = curr_fn;
		curr_fn = fn;
	}
	printf("\n");
	return (0);
}
