#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabets ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x10;
	char ilower;

	for (x10 = 0; x10 < 10; ++x10)
	{
		for (ilower = 'a'; ilower <= 'z'; ++ilower)
		{
			_putchar(ilower);
		}
		_putchar('\n');
	}
}
