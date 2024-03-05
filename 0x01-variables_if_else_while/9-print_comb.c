#include <stdio.h>

/**
 * main - Entry point
 * -
 * Return:0
 */
int main(void)
{
	int n;

	for (n = '0'; n < '9'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('9' + ' ' + '\0');
	return (0);
}
