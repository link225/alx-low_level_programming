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
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * controle instruction
	 */
	last = n % 10;

	if (last != 0 && last < 5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	else if (last > 5 && last > 0)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0 && last < 5)
		printf("Last digit of %d is %d and is 0\n", n, last);
	return (0);
}
