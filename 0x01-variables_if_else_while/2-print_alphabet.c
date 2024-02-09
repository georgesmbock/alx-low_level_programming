#include <stdio.h>

/**
 * main - function
 * -
 * Return: nothing
 */
void main(void)
{
	char c;
	c = '0';

	while ((c >= 'a') && (c <= 'z'))
	{
		putchar(c);
	}
}
