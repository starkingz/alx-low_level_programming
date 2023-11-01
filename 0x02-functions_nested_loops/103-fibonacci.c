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

	for (i = 0; i < 50; i++)
	{
		fn = previous + current;

		if (!(fn >= 4000000))
		{
			if (fn % 2 == 0)
			{
				printf("%d", fn);

				if (!(i >= 31))
				printf(", ");
			}

			previous = current;
			current = fn;
		}
	}
	printf("\n");
	return (0);
}
