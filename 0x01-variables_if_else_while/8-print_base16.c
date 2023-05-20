#include <stdio.h>

/**
 * main -Prints all the number of base 16
 * the use putchar function
 * Return: 0
 */
int main(void)
{
	char c;
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
