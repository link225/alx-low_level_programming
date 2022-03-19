#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer - print the time
 * Return: an void ;
 **/
void jack_bauer(void)
{
	int i, c;

	for (c = 0; c <= 23; c++)
	{
		for (i = 0; i <= 59; i++)
		{
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
		}
	}
}
