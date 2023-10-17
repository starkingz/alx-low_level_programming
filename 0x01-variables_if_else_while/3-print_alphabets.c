#include <stdio.h>
/**
 * main - output lower and upper case alphabet together
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char islower = 'a';
	char isupper = 'A';

	while (islower <= 'z')
	{
		putchar(islower);
		++islower;
	}
	while (isupper <= 'Z')
	{
		putchar(isupper);
		++isupper;
	}
	putchar('\n');

	return (0);
}
