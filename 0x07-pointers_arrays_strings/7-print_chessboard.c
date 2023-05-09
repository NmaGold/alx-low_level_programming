#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *  @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int j;
	int b;

	for (j = 0; j < 8; j++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[j][b]);
		_putchar('\n');
	}
}
