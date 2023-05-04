#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit ..
 * of a number
 * @n: character set
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	n = n % 10;

	/* if n less than 0 declare the absolute value */
	n = abs(n) % 10;

	/* Output the absolute value of n */
	_putchar('0' + n);
	return (n);
}
