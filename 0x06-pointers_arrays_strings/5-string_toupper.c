#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase charaters to uppercase
 * @s: character to change
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int i, n, len = 0;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		n = s[i];
		if (n >= 97 && n <= 122)
			s[i] = n - 32;
		else
			s[i] = n;
	}
	return (s);
}
