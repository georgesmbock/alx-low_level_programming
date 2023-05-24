#include "main.h"

/**
 *print_sign - prints the sign of a number
 *@n:integer
 *Return:1 if '+' and 0 if zero and '-'
 */
int print_sign(int n)
{
	int x = 0;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		x = -1;
		_putchar('-');
	}
	else
	{
		x = 0;
		_putchar('0');
	}
	return (x);
}
