#include "main.h"
#include <string.h>
/**
 * string_toupper - concacte two string
 * @a: first char is pointer
 * Return: char
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] > 96 && a[i] < 123)
		{
			a[i] -= 32;
		}
	}
	return (a);
}
