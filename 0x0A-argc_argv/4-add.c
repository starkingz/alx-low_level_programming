#include <string.h>
#include <ctype.h>
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
	unsigned int a, sum, num;

	sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (a = 0; argv[argc][a] != '\0'; a++)
		{
			if (!(isdigit(argv[argc][a])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (sum);
}
