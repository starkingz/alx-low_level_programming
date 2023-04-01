#include <stdio.h>

/**
 * main - Entry point of a the program
 *
 * Return: Always Return 0 (success)
 *
 */

int main(void)
{
	char num;
	int alpha;

	/* Prints all the number of base 16 in lowercase */
	for (num = '0'; num <= '9'; num++) /* 0 -  9 */
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++) /* a - f */
	{
		putchar(alpha);
	}
	/* followed by a new line */
	putchar('\n');

	return (0);
}
