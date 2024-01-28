#include <stdio.h>

/**
 * modif_char_var - set chars to a new value
 * @cc: integer to assign new value
 * @ccc:second integer to assign new value
 *
 * Return: void
 */
void modif_char_var(char *cc, char ccc)
{
	printf("Value of 'cc' is %p\n", cc);
	printf("Address of 'cc' is %p\n", &cc);

	*cc = 'o';
	ccc = 'l';
}

/**
 * main - how to change the value of variable from outside
 * the function it is declared in, using a pointer
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("Value of 'c' before the function call is %d ('%c')\n", c, c);
	printf("Address of 'c' is %p\n", &c);
	printf("Value of 'p' is %p\n", p);
	printf("Address of 'p' is %p\n", &p);

	modif_char_var(p, c);
	printf("Value of 'c' after the function call is %d ('%c')\n", c, c);

	return (0);
}
