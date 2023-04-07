#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns reverse recurse
 * @s: prints a string
 *
 * Return: length of the string
 *
 */

int _strlen_recursion(char *s)
{
int num = 0;

if (*s)
{
num++;
num += _strlen_recursion(s + 1);
}
return (num);
}