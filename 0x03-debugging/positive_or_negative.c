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
int positive_or_negative(int i)
{

	/* your code goes there */
	printf("%d", i);
	if (i > 0)
	{
		printf(" is positive\n");
	}
	if (i == 0)
	{
		printf(" is zero\n");
	}
	if (i < 0)
	{
		printf(" is negative\n");
	}
	return (0);
}
