#include <stdio.h>

/**
 * main - printing the of size of a pointer in bytes
 *
 * Return: Always 0
 */
int main(void)
{
	int *p;
	char *c;
	float *f;

	printf("Size of a pointer of an int 'p' is %lu bytes\n",
	sizeof(p));
	printf("Size of a pointer of a char 'c' is %lu bytes\n",
	sizeof(c));
	printf("Size of a pointer of float 'c' is %lu bytes\n",
	sizeof(f));

	return (0);
}
