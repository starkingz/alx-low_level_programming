#include <stdio.h>
#include "main.h"

/**
 * helper - take the decision
 * @b: int
 * @n: int
 * Return: 0 (success)
 */

int helper(int b, int n)
{
	int a;

	if (b * b != n)
	{
		if (b > n)
		{
			return (-1);
		}
		a = helper(b + 1, n);
		return (a + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion - returns square root
 * @n: int
 * Return: returns square root
 */

int _sqrt_recursion(int n)
{
int b = 0;

if (helper(b, n) == n && n != 1)
return (-1);
return (helper(b, n));
}
