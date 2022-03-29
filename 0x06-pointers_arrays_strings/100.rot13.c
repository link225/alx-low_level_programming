#include "main.h"
#include <string.h>
/**
 * leet - remplace letter
 * @a: first char is pointer
 * Return: char
 */
char *leet(char *a)
{
	int i, k;
	char tab[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char tab1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (tab[k] == a[i])
			{
				a[i] = tab1[k];
			}
		}
	}
	return (a);
}
