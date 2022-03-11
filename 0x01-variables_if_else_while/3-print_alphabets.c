#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *  main - the main app function
 * Return: 0 for success
 */
int main(void)
{
	char a;
	char A;

	for (a = 'a'; a <= 'z'; ++a)
	{
		putchar(a);
	}
	for (A = 'A'; A <= 'Z'; ++A)
	{
		putchar(A);
	}
	putchar('\n');


	return (0);
}
