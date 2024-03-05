#include <stdio.h>

/**
 * main - function
 * -
 * Return:Nothing
 */
void main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i + '\0');
	for (i = 'a'; i < 'g'; i++)
		putchar(i + '\0');
	putchar('\n');
}
