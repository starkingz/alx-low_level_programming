#include <stdio.h>

/**
 * main - using sizeof to check for the size of data types in current machine
 *
 * Return: 0 Always
 */
int main(void)
{
	int n;

	printf("Size of type 'char' on my computer is %lu bytes\n",
	sizeof(char));
	printf("Size of type 'int' on my computer is %lu bytes\n",
	sizeof(int));
	printf("Size of type 'float' on my computer is %lu bytes\n",
	sizeof(float));
	printf("Size of type of my variable on my computer is %lu bytes\n",
	sizeof(n));

	return(0);
}
