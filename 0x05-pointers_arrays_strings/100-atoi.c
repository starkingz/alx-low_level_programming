#include <string.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to cnvert
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i, j, len;
        int *a;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == j)
				a = j;
		}
	}
	return a;
}
