#include "main.h"

/**
 * print_last_digit - prints the last digit ..
 * of a number
 * @n: character set
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = 0;

	if (n < 0)
	{
		last_digit = -n % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		last_digit = n % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
