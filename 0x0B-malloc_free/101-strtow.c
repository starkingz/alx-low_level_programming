#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * wrdcnt - counts the number of words
 * Description: a function that splits a string into words
 * @s: string to count
 * Return: int of number of words
 */

int wrdcnt(char *s)
{
	int g, n = 0;

	for (g = 0; s[g]; g++)
	{
		if (s[g] == ' ')
		{
			if (s[g + 1] != ' ' && s[g + 1] != '\0')
				n++;
		}
		else if (g == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer
 */
char **strtow(char *str)
{
	int g, h, k, l, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	g = 0;
	while (str[g])
	{
		if (str[g] != ' ' && (g == 0 || str[g - 1] == ' '))
		{
			for (h = 1; str[g + h] != ' ' && str[g + h]; h++)
				;
			h++;
			w[wc] = (char *)malloc(h * sizeof(char));
			h--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < h; l++)
				w[wc][l] = str[g + l];
			w[wc][l] = '\0';
			wc++;
			g += h;
		}
		else
			g++;
	}
	return (w);
}
