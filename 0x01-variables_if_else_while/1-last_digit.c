#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main -Entry point
 *Description: Print the last digit
 *Return: Always 0
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	r = n % 10;

	if (r > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, r);
	else if (r == 0)
		printf("Last digit of %i is %i and is 0\n", n, r);
	else if (r < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, r);
	return (0);
}
