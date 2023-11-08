#include "main.h"

/**
 * _isdigit - check for digits
 * @c: argument
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	char digit = '0';

	while (digit <= '9')
	{
		if (digit == c)
			return (1);
		++digit;
	}
	return (0); /* END */
}
