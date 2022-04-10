#include "main.h"
#include <string.h>

/**
 * _strspn - concacte two string
 * @s: first char is pointer
 * @accept : second char is pointer
 * Return: int
 */

int *_strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
