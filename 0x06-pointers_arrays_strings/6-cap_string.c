#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * cap_string - capitalizes all firt word of a string
 * @s: string to capitalize
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i, cp = 0, len = 0;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		cp = s[i - 1];
		if ( i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		switch (cp)
		{
		case 32: case 9: case 10: case 44: case 59: case 46:
		case 33: case 63: case 34: case 40: case 41: case 123:
		case 125:
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
			else
				s[i] = s[i];
		}
		break;
		default:
			s[i] = s[i];
		}
	}
	return (s);
}
