#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Return: 0 (auccess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("Last digit of %d", n);

	n = n % 10; /* Updated variable */

	printf(" is %d", n);

	if (n > 5)
	{
		printf(" and is greater than 5\n");
	}
	if (n == 0)
	{
		printf(" and is 0\n");
	}
	if (n < 6 != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
