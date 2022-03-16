#include "main.h"
#include <stdio.h>

/**
 *_islower - the test of entry number
 * Return: 1 if lowercase else 0 ;
 **/
int _islower(int c)
{
	if (c > 64 && c < 91)
	{
		return (0);
	}

	return (1);
}
