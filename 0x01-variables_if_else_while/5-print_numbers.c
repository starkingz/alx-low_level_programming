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

	/* prints all single digit numbers of base 10 starting from 0 */
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	/* followed by a new line */
	putchar('\n');

		return (0);
}
