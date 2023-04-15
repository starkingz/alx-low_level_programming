#include <stdio.h>

/**
 * main - entry point
 * Description: a simple program that prints all possible ...
 * ... different combination of three digits
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int n2;
	int n3;

	for (n = '0'; n <= '9'; n++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (n3 = '0'; n3 <= '9'; n3++)
			{
				if (!((n == n2) || (n2 == n3) || (n > n2)
				      || (n2 > n3)))
				{
					putchar(n);
					putchar(n2);
					putchar(n3);
					if
						(((n < '7') && (n <= '8')
					     && (n <= '9')))
						{
							putchar(',');
							putchar(' ');
						}
				}
			}
		}
	}
	putchar('\n'); /* end of line */
	return (0);
}
