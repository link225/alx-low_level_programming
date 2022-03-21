#include "main.h"

/**
 * print_rev - pass to newline
 * @s: char is pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;
	
	j = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}

	while (s[j] != '\0')
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
