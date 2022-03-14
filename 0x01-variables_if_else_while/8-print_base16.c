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
	char ch = 'a';
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			putchar(i + "0");
		} else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');


	return (0);
}
