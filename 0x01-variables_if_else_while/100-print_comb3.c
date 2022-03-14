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
	int i = 0;
	int j = i + 1;

	while (i < 50)
	{
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (((i * 10) + j) < 89)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');


	return (0);
}
