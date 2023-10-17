#include <stdio.h>

/**
 * main - print digit from 0 to 9
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		++n;
	}
	printf("\n");

	return (0);
}
