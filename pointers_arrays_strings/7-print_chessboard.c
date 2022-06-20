#include "main.h"
/**
 * print_chessboard - Prints the chessboard.
 * @a: Array two dimensions
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;

	while (row < 8)
	{
		int column = 0;

		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
		_putchar('\n');
		row++;
	}
}

