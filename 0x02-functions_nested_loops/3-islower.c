#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if character is in lowercase...
 * ... else it returns 0
 */

int _islower(int c)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (c >= alpha)
		{
			return (1);
		}
		else
		{
			return (0);

		}
	}
	return (0);
}
