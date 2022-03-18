#include "main.h"

/**
 * print_square - print numbers of line in entry
 * @size: int for loop
 * Return: void
 */

void print_square(int size)
{
	int i, b;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
