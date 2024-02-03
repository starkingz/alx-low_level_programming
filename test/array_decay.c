#include <stdio.h>

void f(int *a);

/**
 * main - Illustrating the array type decay
 *
 * Return: 0
 */
int main(void)
{
	int *p;
	int t[10];

	p = t; /* This works because of the auto implicit conversion from array
		  to pointer */
	printf("p: %p\n", p);
	printf("&t[0]: %p\n", &t[0]);
	printf("t: %p\n", t);
	f(t);

	return (0);
}

void f(int *a)
{
	printf("a: %p\n", a);
}
