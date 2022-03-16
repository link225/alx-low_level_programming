#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_isalpha - the test of entry number
 * @c : is int
 * Return: 1 if lowercase else 0 ;
 **/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}

	return (0);
}
