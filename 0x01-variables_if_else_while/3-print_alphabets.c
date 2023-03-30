#include <stdio.h>

/**
 * main - Entry point of the program'
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char lowercase_alpha = 'a';
	char uppercase_alpha = 'A';

	/* Prints the alphabet in lowercase, and then in uppercase */
	for (lowercase_alpha = 'a'; lowercase_alpha <= 'z'; lowercase_alpha++)
		putchar(lowercase_alpha);

	for (uppercase_alpha = 'A'; uppercase_alpha <= 'Z'; uppercase_alpha++)
		putchar(uppercase_alpha);

	/* Followerd by a new line */
	putchar('\n');

	return (0);
}
