#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * reset_to_98 - resets the value to 98
 * @n: input
 *
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: first parameter
 * #b: second parameter
 *
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: return parameter
 *
 * Return: number of characters not counting the string
 */
int _strlen(char *s);

/**
 * _puts - prints a string to stdout followed by a newline
 * @str: character to print
 *
 */
void _puts(char *str);

/**
 * print_rev - print string in reverse
 * @str: character to print
 *
 */
void print_rev(char *str);

/**
 * rev_string - function that reverses a string
 * @s: character to reverse
 *
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string,..
 * ...starting with the first character
 * @s: input
 *
 */
void puts2(char *s);

/**
 * puts_half - prints the second half of the character
 * @str: input
 *
 */
void puts_half(char *str);

/**
 * print_array - prints 'n' elements of an array of integers
 * @a: input of array
 * @n: elements of array
 *
 */
void print_array(int *a, int n);
