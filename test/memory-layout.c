#include <stdio.h>

/**
 * main - checking the size of the memory layout
 *
 */
int main(void)
{
	/* static int data; */   /* stored in uninitialized area */
	static int data = 10;    /* stores in unitialized area */
	return (0);
}
