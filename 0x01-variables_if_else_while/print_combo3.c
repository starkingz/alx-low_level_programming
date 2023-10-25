#include <stdio.h>
#include <stdlib.h>

/**
 * main - print 01 through 09 with commas and spaces
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 48; n1 < 57; n1++)
	{
		for (n2 = 49; n2 <= 57; n2++)
		{
			if (!(n2 <= n1))
			{
				putchar(n1);
				putchar(n2);
				if (!(n1 >= 56))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
