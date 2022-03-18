#include "main.h"

/**
 * print_line - print numbers of line in entry
 * @n: int for loop
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
