#include "main.h"

/**
 * puts_half - pass to newline
 * @s: char is pointer
 * Return: void
 */

void puts_half(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		for (j = i / 2; s[j] != '\0'; j++)
		{
			_putchar(s[j]);
		}
	}
	else
	{
		for (j = (i - 1) / 2 ; s[j] != '\0'; j++)
		{
			_putchar(s[j]);
		}
	}
	_putchar('\n');
}
