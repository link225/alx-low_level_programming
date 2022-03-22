#include "main.h"

/**
 * rev_string - pass to newline
 * @s: char is pointer
 * Return: void
 */

void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
