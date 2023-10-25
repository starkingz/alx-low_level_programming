#include <stdio.h>
#include <stdlib.h>

/**
 * main - print 0:9 with commas and space seperating each value
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 48;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (!(n >= 57))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
