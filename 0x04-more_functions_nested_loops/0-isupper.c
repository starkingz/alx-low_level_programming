#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: argument
 *
 * Return: 0
 */
int _isupper(int c)
{
	char upper = 'A';

	while (upper <= 'Z')
	{
		if (upper == c)
			return (1);
		++upper;
	}
	return (0);
}
