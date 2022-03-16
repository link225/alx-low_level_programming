#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_islower - the test of entry number
 * @c : is int
 * Return: 1 if lowercase else 0 ;
 **/
int _islower(int c)
{
	if (!islower(c))
	{
		return (0);
	}

	return (1);
}
