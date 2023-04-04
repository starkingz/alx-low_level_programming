#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - entry point of the program
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		a++;
	}
	return ('\0');
}
