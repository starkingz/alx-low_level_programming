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

/**
 * print_most_numbers - prints the numbers from 0 to 9 making ..
 * ... 2 and 4 an exception
 *
 */
void print_most_numbers(void);

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void);

/**
 * print_line - function that draws s straight line in the terminal
 *
 */
void print_line(int n);

/**
 * print_diagonal - draws a diaginal line on the terminal
 * @n: input to be drawn
 *
 */
void print_diagonal(int n);

/**
 * print_square - prints a square with '#' character
 *
 */
void print_square(int size);
