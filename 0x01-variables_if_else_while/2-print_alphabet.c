#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: Prints alphabets in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha = 'a'; /* stores single character object */

	while (alpha < 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n'); /* end of line */
		return (0);
}
