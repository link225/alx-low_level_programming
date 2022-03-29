#include "main.h"
#include <string.h>
/**
 * print_number - remplace letter
 * @a: first char is pointer
 * Return: void
 */
void print_number(int a)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');

}
