#include <stdio.h>

/**
 * main - function
 * -
 * Return:0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'Z'; c++)
	{
		if ((c != 'e') & (c != 'q'))
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
