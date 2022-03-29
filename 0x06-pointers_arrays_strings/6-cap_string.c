#include "main.h"
#include <string.h>
/**
 * cap_string - capitalize of words
 * @a: first char is pointer
 * Return: char
 */
char *cap_string(char *a)
{
	int i, trigger, c;

	char nots[] = ",;.!?(){}\n\t\"";


	for (i = 0, trigeer = 0; a[i] != '\0'; i++)
	{
		if (a[0] > 96 && a[0] < 123)
		{
			tigger = 1;
		}

		for (c = 0; nots[c] != '\0'; i++)
		{
			if (nots[c] == a[i])
				trigger = 1;
		}

		if (trigger)
		{
			if (a[i] > 96 && a[i] < 123)
			{
				a[i] -= 32;
				trigger = 0;
			}
			else if (a[i] > 64 && a[i] < 91)
				trigger = 0;
			else if (a[i] > 47 && a[i] < 58)
				trigger = 0;
		}
	}
	return (a);
}
