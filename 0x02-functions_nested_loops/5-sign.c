#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *print_sign - the test of entry sign
 * @c : is int
 * Return: 1 if greater than 0  0 else if 0 else -1 ;
 **/
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar(45);
	return (-1);
}
