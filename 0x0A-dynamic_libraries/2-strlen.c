#include "main.h"
#include <stdio.h>

/**
 * _strlen - string
 * @s: strings input
 * Return: returning
 */
int _strlen(char *s)
{
int length = 0;

while (*(s + length) != '\0')
length++;
return (length);
}
