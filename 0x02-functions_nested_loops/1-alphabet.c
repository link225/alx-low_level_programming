#include "main.h"
#include <stdio.h>

/* more headers goes there */

/**
 * print_alphabet - the function to print a to z for alphabet
 *
 * Return: char
 **/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
