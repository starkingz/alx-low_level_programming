#include <stdio.h>
#include "main.h"

/**
 * _strspn - Entry point of the program
 * @s: input
 * @accept: input
 * Return: 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				result++;
					break;
			}
			else if (accept[a + 1] == '\0')
				return (result);
		}
		s++;
	}
	return (result);
}
