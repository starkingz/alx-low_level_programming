/* header directive */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print lowercase alphabets
 *
 * Return: always 0 (success)
 */
int main(void) /* main function definiton */
{
	char islower = 'a'; /* initializer */

	while (islower <= 'z') /* condition */
	{
		putchar(islower); /* output */
		++islower; /* increment */
	}
	putchar('\n'); /* endline */

	return (0); /* return (success) */
}
