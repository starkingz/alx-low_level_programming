#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description - Prints lowercase and uppercase alphabet
 * Return: Always 0 (success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
			upper++;
	}
	putchar('\n'); /* end of line */
	return (0);
}
