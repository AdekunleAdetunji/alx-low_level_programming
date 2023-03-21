#include "main.h"

/**
 * jack_bauer - prints every minute in a day
 * Return - Returns void
 */
void jack_bauer()
{
	int m;
	int s;

	for (m = 0; m <= 23; m++)
	{
		for(s = 0; s <= 59; s++)
		{
			_putchar('0' + m/10);
			_putchar('0' + m%10);
			_putchar(':');
			_putchar('0' + s/10);
			_putchar('0' + s%10);
			_putchar('\n');
		}
	}
	return;
}
