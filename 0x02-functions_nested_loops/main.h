/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0 Always
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: 0 Always success
 */
void print_alphabet_x10(void);

/**
 * is_lower - checks for lowercase character
 *
 * Return: 1 if lowercase  otherwise  0
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic characters
 * @c: character that checks
 *
 * Return: 1 if letter, lowercase or uppercase ...
 * ... else print 0
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 * @c: character of the number
 *
 * Return: 0
 */
int print_sign(int n);
