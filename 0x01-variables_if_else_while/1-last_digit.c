#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int last_digit = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d ", n);

	last_digit = n % 10;
	if (last_digit > 5)
		printf("is %d and is greater than 5\n", last_digit);
	if (last_digit == 0)
		printf("is %d and is 0\n", last_digit);
	if (last_digit < 6 && last_digit != 0)
		printf("is %d and is less than 6 and not 0\n", last_digit);

	return (0);
}
