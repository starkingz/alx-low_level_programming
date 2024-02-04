#include <stdio.h>

/**
 * main - print the hypothesis
 *
 * Return: Always 0
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;  /* Same as *(a + 0) */
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;

	printf("Value of *a: %d\n", *a);
	printf("Address of *(a + 1): %p\n", &(*(a + 1)));
	printf("Value of a[3]: %d\n", *(a + 3));
	printf("Address of a[3]: %p\n", &(*(a + 3)));

	p = a + 1;
	*p = 98;
	p2 = a + 3;
	*p2 = *p + 1337;

	printf("Address of 'p': %p\n", &p);
	printf("Value of '*p': %d\n", *p);
	printf("Address of '*(a + 1): %p\n", &(*(a + 1)));
	printf("Value of '*(a + 1)': %d\n", *(a + 1));
	printf("Address of 'p2': %p\n", &p2);
	printf("Value of '*p2': %d\n", *p2);
	printf("Value of 'a[3]': %d\n", a[3]);

	return (0);
}
