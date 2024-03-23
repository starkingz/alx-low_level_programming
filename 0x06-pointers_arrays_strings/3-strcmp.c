#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: zero || difference of the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i, len;
	int res = 0;

	len = strlen(s1);
	for (i = 0; i <= len; i++)
	{
		if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
		{
			res = s1[i] - s2[i];
			return (res);
		}
	}
	return (res);
}
