#include <stdio.h>

/**
 * _putchar - print char to stdout
 * @c: input
 */
int _putchar(char c);

/**
 * reset_to_98 - deference n to 98
 * @n: pointer
 */
void reset_to_98(int *n);

/**
 * swap_int - swap values of two variables using deferencing
 * @a: first pointer
 * @b: second pointer
 *
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: char
 *
 * Return: Always 0
 */
int _strlen(char *s);

/**
 * _puts = print each char to stdout
 * @str: char to print
 *
 * Return: void
 */
void _puts(char *str);

/**
 * print_rev - print a string in reverse
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s);

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s);

/**
 * puts2 - print string by even number, starting from the first char
 * @s: string to print
 *
 * Return: void
 */
void puts2(char *s);

/**
 * puts_half - print half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str);

/**
 * print_array - prints n element of an array of integers
 * @a: values to print
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies the string pointed to by src,including terminating null byte
 * @dest: value to be returned
 * @src: value to copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: int
 */
int _atoi(char *s);
