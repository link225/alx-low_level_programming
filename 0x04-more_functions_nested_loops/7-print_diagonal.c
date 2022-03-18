#include "main.h"

/**
 * print_diagonal - print numbers of line in entry
 * @n: int for loop
 * Return: void
 */

void print_diagonal(int n)
{
	int i, b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
