#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes theree */
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}