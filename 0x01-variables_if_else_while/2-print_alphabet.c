#include <stdio.h>

/**
 * main - function
 * -
 * Return:0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\0');
	return (0);
}
