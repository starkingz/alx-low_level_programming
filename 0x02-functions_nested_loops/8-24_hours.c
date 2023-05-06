#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int hour = 0;
	int minutes = 0;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar('0' + hour / 10);
				_putchar('0' + hour % 10);
				_putchar(':');
				_putchar('0' + minutes / 10);
				_putchar('0' + minutes % 10);
				_putchar('\n');
		}
	}
}
