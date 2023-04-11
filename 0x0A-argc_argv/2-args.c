#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument array
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	for (int a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
