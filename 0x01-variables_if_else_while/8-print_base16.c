#include <stdio.h>

/**
 * main - function
 * -
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i + '\0');
	for (i = 'a'; i < 'g'; i++)
		putchar(i + '\0');
	putchar('\n');

	return (0);
}
