#include "main.h"
#include <ctype.h>

/**
 * _isdigit - chec if param is digit
 * @c: int
 * Return: int;
 */

int _isdigit(int c)
{
	int a;

	if (isdigit(c))
	{
		a = 1;
	} else
	{
		a = 0;
	}
	return (a);
}
