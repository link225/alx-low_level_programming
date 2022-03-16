#include "main.h"
#include <stdio.h>

/* more headers goes there */

/**
 *  main - the main app function
 * Return: 0 for success
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
