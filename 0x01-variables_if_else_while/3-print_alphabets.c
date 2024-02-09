#include <stdio.h>

/**
 * main - funtion
 * -
 * Return:0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
