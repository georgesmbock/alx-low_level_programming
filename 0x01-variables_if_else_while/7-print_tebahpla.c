#include <stdio.h>

/**
 *main -prints the lowercase alhabet inverse
 *
 *The use only putchar
 *Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
