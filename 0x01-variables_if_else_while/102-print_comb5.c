#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int tens;
	int ones;
	int tens2;
	int ones2;

	for (tens = 48; tens <= 57; tens++)
	{
		for (ones = 48; ones <= 57; ones++)
		{
			    for (tens2 = 48; tens2 <= 57; tens2++)
			    {
				    for (ones2 = 48; ones2 <= 57; ones2++)
				    {
					    putchar(tens);
					    putchar(ones);
					    putchar(' ');
					    if (tens2 != 0)
					    {
					       	    putchar(tens2);
				       		    putchar(ones2);
			       			    if (!(tens >= 57
							  && ones >= 56))
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
