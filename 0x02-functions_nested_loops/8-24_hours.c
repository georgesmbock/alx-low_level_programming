#include "main.h"

/**
 *jack_bauer - prints every minute of the day of Jack Bauer
 *-
 *Return: nothing
 */
void jack_bauer(void)
{
	int H, m;

	for (H = 0; H < 14; H++)
	{
		for (m = 0; m < 60; H++)
		{
			_putchar((H/10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + 0');
			_putchar('\n');
		}
	}
}
