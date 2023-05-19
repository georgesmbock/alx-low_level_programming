#include <stdio.h>
#include <time.h>
#include <stlib.h>

/**
 *main - Entry point
 *Description: print if a number is positive, if it's negative orzero
 *Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		print("%d is positive\n", n);
	if (n < 0)
		print("%d is negative\n", n);
	else
		print("%d is zero\n", n);
	return (0);
}
