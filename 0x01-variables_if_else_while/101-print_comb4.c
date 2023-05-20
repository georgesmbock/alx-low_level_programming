#include <stdio.h>

/**
 *main - prints all posible combinaison
 *Description: Use putchar function
 *Return: 0
 */
int main(void)
{
	int m;
	int n;
	int p;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (p = m + 1; p < 10; p++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((p % 10) + '0');

				if (n == 7 && m == 8 && p == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
