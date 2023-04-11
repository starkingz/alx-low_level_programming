#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array
 * Description: function that creates an array of chars, and initializes it with
 * a specific char.
 * @size: size of array
 * @c: initiaaize char
 * Return: char value
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
