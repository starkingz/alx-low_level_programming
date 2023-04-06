#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @num: an integer whose factorial is to be determined
 * Return: factorial of n
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}
