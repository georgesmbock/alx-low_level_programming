#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * -
 * Return: 0
 */
int main(void)
{
	int x = 48;
	int y = 49;
	int z = 50;

	for (x = 48; x <= 57; x++)
	{
		for (y = 49; y <= 56; y++)
		{
			for (z = 50; z <= 57; z++)
			{
				if (x < y && y < z)
				{
					/*if (y < z)*/
					/*{*/
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == 55 && y == 56 && z == 57)
						continue;
					putchar(',');
					putchar(' ');
					/*}*/
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
