#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 * -
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (x < y && x != y)
			{
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
