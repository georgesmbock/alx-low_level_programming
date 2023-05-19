#include <stdio.h>

/**
 *main - Entry point
 *Description: Use the putchar function
 *Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
