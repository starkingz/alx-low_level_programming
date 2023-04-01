#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char rev_alpha;

	/* prints reverse alphabet in lowercase */
	for (rev_alpha = 'z'; rev_alpha >= 'a'; rev_alpha--)
	{
		putchar(rev_alpha);
	}

	/* followed by a new line */
	putchar('\n');

	return (0);
}
