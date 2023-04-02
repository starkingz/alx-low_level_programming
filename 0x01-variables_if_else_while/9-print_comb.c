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

	/* prints all posible combinations of single digit numbers */
	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num != 9)

		putchar(',');
		putchar(' ');
	}
	/* Followed by a line */
	putchar('\n');

	return (0);
}
