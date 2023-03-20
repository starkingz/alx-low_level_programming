#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: 0 (success)
 */
int main(void)
{
char c;
int i;
float f;
/*Signed and unsigned sizes*/
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %li byte(s)\n", (long)sizeof(i));
printf("Size of a long long int: %lli byte(s)\n", (long long)sizeof(i));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
