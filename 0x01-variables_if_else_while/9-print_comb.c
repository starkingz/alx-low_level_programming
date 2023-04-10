#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: a simple program that prints all possible combinations
 * of single-digit numbers
 * Return: always 0 (success)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;

		if (num <= '9') /* stop at 9 */
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n'); /* end of line */
	return (0);
}
