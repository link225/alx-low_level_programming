#include "main.h"

/**
 * print_array - pass to newline
 * @a: int is pointer
 * @n: integer for array lenght
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n)
		{
			printf("%d", a[i]);
			printf(", ");
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");

}
