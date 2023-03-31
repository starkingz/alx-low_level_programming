#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{

	char alpha;

	/* Prints an alphabet in lowercase */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		/* make letter e and q an exception */
		if ((alpha != 'e') && (alpha != 'q'))
		{
			putchar(alpha);
		}
	}
	putchar('\n');

	return (0);
}
