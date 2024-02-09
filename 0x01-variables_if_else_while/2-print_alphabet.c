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
		putchar('\0', c);
	}
	return (0);
}
