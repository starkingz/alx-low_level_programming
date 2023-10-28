#include "main.h"
#include <stdio.h>

/**
 * _isalpha - check for uppercase char or lowercase char
 *@c: char to check
 *
 * Return: 1 if true or 0 if false
 */
int _isalpha(int c)
{
	int upper;
	int lower;

	for (upper = 65; upper <= 90; ++upper)
	{
		if (c == upper)
			return (1);
	}
	for (lower = 97; lower <= 122; ++lower)
	{
		if (c == lower)
			return (1);
	}
	return (0);
}
