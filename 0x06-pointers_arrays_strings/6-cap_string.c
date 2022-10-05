#include "holberton.h"
/**
  * cap_string- a function to cap first letters of words in string
  * @s: that's our string
  *
  *
  *
  * Return: answer
  */
char *cap_string(char *s)
{
	int i = 0;
	int z = 1;
	char *answer = s;
	char *pest = " \t\n;,.!?\"(){}\0";

	while (*s)
	{
		if (z)
		{
			if (*s >= 'a' && *s <= 'z')
				*s -= 32;
			z = 0;
		}
		for (i = 0; pest[i]; i++)
		{
			if (*s == pest[i])
				z = 1;
		}
		s++;
	}
	return (answer);
}
