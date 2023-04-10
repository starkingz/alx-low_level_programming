#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: a program that prints all the numbres of base 16 in lowercase
 * Return: always 0 (success)
 */

int main(void)
{
	int num = '0';
	char alpha = 'a';

	while (num <= '9')
	{
		putchar(num++);
	}
	while (alpha <= 'f')
	{
		putchar(alpha++);
	}
	putchar('\n'); /* end of line */

	return (0);
}
