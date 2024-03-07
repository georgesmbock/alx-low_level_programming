#include <stdio.h>

/**
 * main - Entry point
 * -
 * Return: 0
 */
int main(void)
{
	int n = 48;
	int y = 49;

	while (n <= 56)
	{
		for (y = 49; y <= 57; y++)
			if (n < y)
			{
				putchar(n);
				putchar(y);
				if (n == 56 && y == 57)
					continue;
				putchar(44);
				putchar(32);
			}
			n = n + 1;
	}
	putchar('\n');
	return (0);
}
