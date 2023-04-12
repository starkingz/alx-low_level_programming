#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * Description: a function that concatenates all the arguments
 * @ac: number
 * @av: double pointer
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int g, h, k = 0, n = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (g = 0; g < ac; g++)
	{
		for (h = 0; av[g][h]; h++)
			n++;
		n++;
	}
	n++;
	s = malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (g = 0; g < ac; g++)
	{
		for (h = 0; av[g][h]; h++)
		{
			s[k] = av[g][h];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
