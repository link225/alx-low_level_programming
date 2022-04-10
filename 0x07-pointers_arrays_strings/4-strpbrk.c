#include "main.h"
#include <string.h>

/**
 * _strpbrk - concacte two string
 * @s: first char is pointer
 * @accept : second char is pointer
 * Return: int
 */

char _strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
