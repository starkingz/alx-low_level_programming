#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: a simple program that prints all single diigt of base 10
 * starting from '0'
 * Return: Always 0 (success)
 */

int main(void)
{
char n = 0;

while (n <= 9)
{
printf("%d", n++);
}
printf("\n"); /* end of line */

return (0);
}
