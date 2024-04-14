#include "main.h"
#include <time.h>
#include <stdlib.h>

/* more headers goes there */

/**
 * positive_or_negative - function that prints positive or negative or zero
 * @i: integer
 * Return: Always 0
 */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		if (i < 0)
		{
			printf("%d is negative\n", i);
		}
		else
		{
			printf("%d is zero\n", i);
		}
	}
}
