#include <stdio.h>

/**
 * main - Deferencing pointer
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	int n;
	char *pp;
	int *p;

	c = 'H';
	pp = &c;
	n = 98;
	p = &n;

	printf("Value of 'c': %d('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'pp': %p\n", pp);
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);

	/* Deferencing variables */
	*pp = 'o';
	*p = 402;

	printf("Value of 'c': %d('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of '*pp': %d('%c')\n", *pp, *pp);
	printf("Value of 'n': %d\n", n);
	printf("Address of '*p': %d\n", *p);

	return (0);

}
