#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Prints a random number and states wheater it is +,-, or 0*/
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
