#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: a program that prints alphabet backward
 * Return: always 0 (success)
 */

int main(void)
{
	char rev_alpha = 'z';

	while (rev_alpha >= 'a')
	{
		putchar(rev_alpha--);
	}
	putchar('\n'); /* end of line */

	return (0);
}
