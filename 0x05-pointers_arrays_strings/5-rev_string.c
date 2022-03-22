#include "main.h"

/**
 * rev_string - pass to newline
 * @s: char is pointer
 * Return: void
 */

void rev_string(char *s)
{
	char ch;
	int i, c, l;

	for (i = 0; s[i] != '\0'; i++)
		;
	l = i;

	for (i--, c = 0; c < l / 2; c++, i--)
	{
		ch = s[c];
		s[c] = s[i];
		s[i] = ch;
	}
}
