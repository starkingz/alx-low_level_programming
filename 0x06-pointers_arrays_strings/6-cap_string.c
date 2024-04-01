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
	char *ch;

	len = strlen(s);
	ch = (char *) malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
		ch[i] = s[i];

	for (i = 0; i < len; i++)
	{
		cp = ch[i - 1];
		switch (cp)
		{
		case 32: case 9: case 10: case 44: case 59: case 46:
		case 33: case 63: case 34: case 40: case 41: case 123:
		case 125:
		{
			if (ch[i] >= 97 && ch[i] <= 122)
				s[i] = ch[i] - 32;
			else
				s[i] = ch[i];
		}
		break;
		default:
			s[i] = ch[i];
		}
	}
	return (s);
}
