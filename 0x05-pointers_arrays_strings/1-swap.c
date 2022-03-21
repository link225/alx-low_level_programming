#include "main.h"

/**
 * swap_int - reset the number
 * @a: first int is pointer
 * @b: second int is pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
