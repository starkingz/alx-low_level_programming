#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument array
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a;

	(void) argc;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
