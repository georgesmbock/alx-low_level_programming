#include<stdio.h>

/**
 * main - function
 * -
 * Return:0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int n;
	float f;

	print("Size of a char: %lu byte(s)", sizeof(c));
	print("Size of a int: %lu byte(s)\n", sizeof(i));
	print("Size of a long int: %lu byte(s)\n", sizeof(l));
	print("Size of a long long int: %lu byte(s)\n", sizeof(n));
	print("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
