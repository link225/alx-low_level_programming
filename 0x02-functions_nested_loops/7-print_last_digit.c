#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - the last number of entry number
 * @c : is int
 * Return: int is the last digit of @c;
 **/
int print_last_digit(int c)
{
	int last;

	if (c < 0)
	{
		last = (-1 * (c % 10));
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = (c % 10);
		_putchar(last + '0');
		return (last);
	}
}
