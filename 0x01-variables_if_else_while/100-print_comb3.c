#include <stdio.h>

/**
 * main - entry point
 * Description: a simple program that prints all possible different....
 * ... combination of two digits
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int n2;

	for (n = '0'; n <= '9'; n++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			if (!((n == n2) || (n > n2)))
			{
				putchar(n);
				putchar(n2);
				if ((n < '8') && (n2 <= '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n'); /* end of line */
	return (0);
}
