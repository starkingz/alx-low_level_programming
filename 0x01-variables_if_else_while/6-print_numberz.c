#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num;

	/* Prints all single number of base 10 starting from 0 */
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	/* followed by new line */
	putchar('\n');

	return (0);
}
