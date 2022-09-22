#include "main.h"

/**
 * main - Checks if a character is alphabetic.
 *
 * Return: 1 if character is c, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
