#include "main.h"
#include <string.h>

/**
 * print_chessboard - concacte two string
 * @a: first char is pointer
 *
 * Description: print_chessboard
 * Return: int
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}

}
