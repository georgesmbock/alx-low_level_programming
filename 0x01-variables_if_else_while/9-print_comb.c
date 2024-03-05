#include <sdtio.h>

/**
 * main - Entry point
 * -
 * Return: Nothing
 */
void main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\0');
}
