#include "main.h"

/**
 * print_line - print numbers of line in entry
 * @c: int for loop
 * Return: void
 */

void print_line(int c)
{
	int i;

	if (c > 0)
	{
		for (i = 0; i <= c; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	} else
	{

		_putchar('\n');
	}
}
