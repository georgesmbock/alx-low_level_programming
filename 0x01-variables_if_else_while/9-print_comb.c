#include <stdio.h>

/**
 * main - Entry point
 * -
 * Return:0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		if (n == '9')
		{
			putchar('9' + '\0');
		}
		else
		{
			putchar(n + '\0');
			putchar(',');
			putchar(' ');
		}
	return (0);
}
