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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * controle instruction
	 */
	if (n < 0)
	{
		printf("%d is negative\n", n);

	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
