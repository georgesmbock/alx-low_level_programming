#include "main.h"

/**
 *print_alphabet_x10 - prints  alphabet 10 times
 *-
 *Return:Empty
 */
void print_alphabet_x10(void)
{
	int i;
	int d;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (d = 'a'; d <= 'z'; d++)
			_putchar(d,'\n');
		_putchar('\n');
	}
}
