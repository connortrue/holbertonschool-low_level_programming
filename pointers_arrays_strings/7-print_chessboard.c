#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: 2D array representing the chessboard
 *
 * Description: This function prints the chessboard represented by a 2D
 * array of characters.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* Loop through rows */
	for (i = 0; i < 8; i++)
	{
		/* Loop through columns */
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]); /* Print character */
		_putchar('\n'); /* New line after each row */
	}
}
