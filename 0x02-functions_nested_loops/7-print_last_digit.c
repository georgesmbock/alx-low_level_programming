#include "main.h"

/**
 *print_last_digit - prints last digit
 *@n:integer
 *Return:last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
