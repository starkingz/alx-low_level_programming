#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the smallest combinations of three digits
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = 48; hundreds <= 57; hundreds++)
	{
		for (tens = 49; tens <= 57; tens++)
		{
			if (!(tens <= hundreds)) /* don't print if false */
			{
				for (ones = 50; ones <= 57; ones++)
			       	{
					if (!(ones <= tens))
					{
						putchar(hundreds);
						putchar(tens);
						putchar(ones);
						if (!(hundreds >= 55))
						{
							putchar(',');
							putchar(' ');
						}
					}
		       		}
		       	}
		}
	}
		putchar('\n');
		return (0);
}
