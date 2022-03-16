#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *prin_last_digit - the last number of entry number
 * @c : is int
 * Return: int is the last digit of @c;
 **/
int print_last_digit(int c)
{
	int last;

	last = abs(c) % 10;
	_putchar(last + '0');
	return (last);
}
