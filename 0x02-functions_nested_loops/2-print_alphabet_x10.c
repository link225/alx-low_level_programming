#include "main.h"
#include <stdio.h>

/* more headers goes there */

/**
 * print_alphabet_x10 - the function to print a to z for alphabet x10
 *
 * Return: char
 **/
void print_alphabet_x10(void)
{
	char ch;

	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		i++;
	}
}
