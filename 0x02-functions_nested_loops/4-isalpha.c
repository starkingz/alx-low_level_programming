#include "main.h"

/**
 * _isalpha - checks alphabet
 * @c: charaacter to check
 *
 * Return: always 0
 */

int _isalpha(int c)
{
	char lower_alpha = 'a';
	char upper_alpha = 'A';

	for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
	{
		for (upper_alpha = 'A'; upper_alpha <= 'A'; upper_alpha++)
		{
			if (((c >= lower_alpha)|| (c >= upper_alpha)))
		{
			return (1);
		}
		else
		{
			return (0);
		}
		}
	}
	return (0);
}
