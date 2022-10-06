#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int z, q;

	for (z = 0; z < 8; z++)
	{
		for (q = 0; q < 8; q++)
		{
			_putchar(a[z][q]);
		}
		_putchar('\n');
	}
}
