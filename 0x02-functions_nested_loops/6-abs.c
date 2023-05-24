#include "main.h"

/**
 *_abs - computes the absolute value
 *@n:integer
 *Return: n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		n = -1 * n;
		return (n);
	}
	return (n);
}
