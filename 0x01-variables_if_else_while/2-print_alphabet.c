#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
char alphabet;

/* prints the alphabet in lowercase */
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);

/* followed by a  new line */
putchar('\n');

return (0);
}
