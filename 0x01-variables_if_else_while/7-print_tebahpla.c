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
	char z = 'z';

	while(z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');


	return (0);
}
