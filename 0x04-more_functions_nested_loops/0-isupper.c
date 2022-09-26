#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		printf("%c: %d\n", c, _isupper(c));		
		return (1);
	}	
		
	return (0);
}
