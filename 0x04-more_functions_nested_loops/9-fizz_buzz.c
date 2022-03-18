#include <stdio.h>
/**
 * main - print numbers of line in entry
 * Return: void
 */

int main(void)
{
	int i = 1, b = 100;

	while (i <= b)
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
			printf("%i", i);
		}
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);

}
