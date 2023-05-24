#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c:integer
 *Return:1 if c is letter lower or upp and 0 else
 */
int _isalpha(int c)
{
	if ('a' <= c && c <= 'z')
	       return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}
