#include "main.h"

/**
 * print_rev - pass to newline
 * @s: char is pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)

	printf("%d\n", i);
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
		if (s[i] == 0)
			_putchar('\n');
	}
}
