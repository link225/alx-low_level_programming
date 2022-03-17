#include "main.h"
#include <ctype.h>
/**
 * _isupper - check if char is upper
 * @c: int
 * Return: int
 */

int _isupper(int c)
{
	int a;

	if (isupper(c))
	{
		a = 1;
	} else
	{
		a = 0;
	}

	return (a);
}
