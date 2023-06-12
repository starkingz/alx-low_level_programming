#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverse a string
 * @s: character
 *
 */

void rev_string(char *s)
{
        unsigned long int i;
	char rev;

	for (i = 0; i < strlen(s) / 2; i++)
	{
		rev = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = rev;
	}
}
