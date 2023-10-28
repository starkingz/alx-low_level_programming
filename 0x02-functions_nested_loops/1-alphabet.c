#include "main.h"

/**
 * print_alphabet - print lowercase alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ilower = 'a';

	for (ilower = 'a'; ilower <= 'z'; ++ilower)
	{
		_putchar(ilower);
	}
	_putchar('\n');
}
