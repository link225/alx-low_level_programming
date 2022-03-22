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
		printf("%d", a[i]);
		n--;
		if (0 < n)
			printf(", ");
	}
	printf("\n");

}
