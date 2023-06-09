#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: A simple program that prints the alphabet in lowercase
 * make 'q' and 'e' an exception
 * Return: Always 0(success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n'); /* end of line */

	return (0);
}
