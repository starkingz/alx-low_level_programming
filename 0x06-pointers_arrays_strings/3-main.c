#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";
	char s3[] = "Helll";
	char s4[] = "Hellol";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	printf("%d\n", _strcmp(s1, s3));
	printf("%d\n", _strcmp(s1, s4));
	return (0);
}
