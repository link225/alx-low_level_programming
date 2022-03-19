#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - print the time
 * Return: an void ;
 **/
void times_table(void)
{
	int i, c, mul;

	for (c = 0; c <= 9; c++)
	{
		for (i = 0; i <= 9; i++)
		{
			mul = (i * c);
			if ((mul / 10) == 0){
				_putchar(mul + '0');
				if (i < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(mul / 10 +'0');
				_putchar(mul % 10 + '0');
				if (i < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
}
