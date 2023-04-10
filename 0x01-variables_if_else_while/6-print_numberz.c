#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: a simple program that prints all single digit numbers of
 * base 20 starting from '0'
 * Return: Always 0 (success)
 */

int main(void)
{
       int n = '0';

	while (n <= '9')
	{
		putchar(n++);
	}
	putchar('\n'); /* end of line */

		return (0);
}
