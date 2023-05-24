#include "main.h"

/**
 *_islower - Checks for lowercase character
 *@c:integer
 *Return: 1 if c is lowercase and 0 else
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}
