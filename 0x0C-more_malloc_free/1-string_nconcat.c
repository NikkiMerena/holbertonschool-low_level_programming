#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **string_nconcat - a function that concatenates two strings.
 *@s1 : pointer to string
 *@s2 : pointer to string
 *@n : integer
 *Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0, m = 0, q = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;

	if (n >= j)
		n = j;

	a = malloc(sizeof(char) * (i + n + 1));

	if (a == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
	{
		*(a + k) = *(s1 + l);
		l++;
	}
	for (q = 0; q < n; q++)
	{
		*(a + q + i) = *(s2 + m);
		m++;
	}
		*(a + q + i) = '\0';
	return (a);
}
