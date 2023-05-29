#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _isupper - function that checks for uppercase character
 * @c: character to return
 *
 * Return: 1 or 0
 */
int _isupper(int c);

/**
 * _isdigit - function that checks for a digit (0 through 9)
 *@c: Input
 *
 * Return: 1 or 0
 */
int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: first input
 * @b: second input
 *
 * Return: result
 */
int mul(int a, int b);

/**
 * print_numbers  - prints digits from 0 to 9
 *
 * Return: 0
 */
void print_numbers(void);
