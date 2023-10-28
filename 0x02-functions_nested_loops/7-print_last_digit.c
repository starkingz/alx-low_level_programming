#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: input
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		_putchar(-last_digit + '0');
		return (-last_digit);
	}
	else
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
