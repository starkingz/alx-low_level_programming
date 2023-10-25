#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all numbers in base 16 in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
		putchar(c++);
	c = 'a';
	while (c <= 'f')
		putchar(c++);
	putchar('\n'); /* end of line */

	return (0);
}
