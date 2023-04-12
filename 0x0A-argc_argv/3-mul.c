#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success), if 1 output error
 */

int main(int argc, char *argv[])
{
	int n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n2 = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n2);
		return (0);
	}
}