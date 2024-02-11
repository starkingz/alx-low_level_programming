#include <stdio.h>

char str[] = "Ohia Goodstar";   /* global initialized variable area */

int main(void)
{
	printf("%s\n", str);

	str[0] = 'V';

	printf("%s\n", str);

	return (0);
}
