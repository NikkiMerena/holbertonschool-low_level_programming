#include "main.h"
#include <string.h>

/**
* *_strncpy - function taht copies a string.
*
* @dest: a string
* @src: a string.
* @n: character(s).
*
* Return: 0 is success.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
