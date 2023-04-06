#include "main.h"
/**
 * _print_rev_recursion - return string in reverse
 * @s: string
 * Return: return void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
