#include <stdio.h>

/**
 * main - Illustrating arithmetic in array
 *
 * Return: Always 0
 */
int main(void)
{
	int a[5];


	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	*(a + 4) = 498;

	printf("Value of a[0]: %d\n", *a);
	printf("Value of a[1]: %d\n", a[1]);
	printf("Vslue of a[2]: %d\n", a[2]);
	printf("Value of a[3]: %d\n", a[3]);
	printf("Value of a[4]: %d\n", a[4]);

	printf("--------------------\n");

	printf("Value of 'a' (also address of a[0]): %p\n", a);
	printf("Address of 'a[1]': %p\n", (a + 1));
	printf("Address of 'a[1]': %p\n", &(*(a + 1)));

	return (0);

}
