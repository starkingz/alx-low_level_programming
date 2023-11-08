#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 *
 * Return: 0 always (success)
 */

int main(void)
{
	char c = '0';

	c =  '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}
