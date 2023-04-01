#include <stdio.h>

 /**
 * main - Entry point of the program'
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char lower_alpha = 'a';
	char upper_alpha = 'A';

	/* Prints an alphabet in lowercase, and then in uppercase */
	for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
		putchar(lower_alpha);

	for (upper_alpha = 'A'; upper_alpha <= 'Z'; upper_alpha++)
		putchar(upper_alpha);

	/* Followerd by a new line */
	putchar('\n');

	return (0);
}
