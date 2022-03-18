#include "main.h"

/**
 * print_square - print numbers of line in entry
 * @size: int for loop
 * Return: void
 */

void print_square(int size)
{
	int i = 1, b = 100;

	while (i <= j)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			print("%i", i);
		}
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);

}
