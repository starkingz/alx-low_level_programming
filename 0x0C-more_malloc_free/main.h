#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character
 */
int _putchar(char c);

/**
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 * @c: The character in ASCII code
 */
int _islower(int c);


/**
 * _isalpha - Shows 1 if the input is a
 * letter Another cases, shows 0
 * @c: The character in ASCII code
 */
int _isalpha(int c);

/**
 * _abs - Computes the absolute value
 * of an integer.
 * @i: input an integer.
 */
int _abs(int i);

/**
 * _isupper - checks for uppercase character
 * @c: Variable text
 */
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
#endif
