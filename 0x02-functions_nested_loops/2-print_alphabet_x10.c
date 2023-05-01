#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Null
 */

void print_alphabet_x10(void)
{
	int x10 = 0;
	char alpha;

	while (x10 <= 9)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		x10++;
	}
}
