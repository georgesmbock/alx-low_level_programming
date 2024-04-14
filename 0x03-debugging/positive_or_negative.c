#include "main.h"
#include <time.h>
#include <stdlib.h>

/* more headers goes there */

/**
 * main - function that prints positive or negative or zero
 * @i: integer
 * Return: Always 0
 */
void positive_or_negative(int i)
{
	/*int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	*/

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
	/*return (0);*/
}
