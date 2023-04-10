#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Description: The 'n' variable will store a different value every time you
 * will run this program
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d", n);
	if (n > 0)
	{
		printf(" is positive\n");
	}
	if (n == 0)
	{
		printf(" is zero\n");
	}
	if (n < 0)
	{
		printf(" is negative\n");
	}
	return (0);
}
