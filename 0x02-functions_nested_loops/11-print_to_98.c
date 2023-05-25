#include <stdio>
#include "main.h"

/**
 *print_to_98 - prints
 *@n:integer
 *-
 *Return:Last digit of @n
 */
void print_to_98(int n)
{
	int j;

	if (n < 98)
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
				printf(", ")
		}
	}
	else
	{
		for (j = ; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
				printf(", ");
		}
	}
	printf("\n");
}
