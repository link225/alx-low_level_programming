#include "main.h"
#include <string.h>
/**
 * reverse_array - concacte two string
 * @a: first int is pointer
 * @n: second int
 * Return: int
 */
void reverse_array(int *a, int n)
{
	int i, h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
