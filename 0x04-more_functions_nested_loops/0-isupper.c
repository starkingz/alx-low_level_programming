#include <stdio.h>
#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: input
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	char i = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if(c == i)
			return (1);
		else
			return (0);
	}
	return (0);
}
