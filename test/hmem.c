#include <stdio.h>
#include <stdlib.h>

/**
 * main - illustrate the work of heap in memory
 *
 */
int main(void)
{
	char *ptr = malloc(sizeof(char) * 4);

	printf("Malloc of '*ptr': %d\n", *ptr);

	return (0);
}
