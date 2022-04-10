#include "main.h"
#include <string.h>

/**
 * _strstr - concacte two string
 * @s: first char is pointer
 * @accept : second char is pointer
 * Return: char
 */

char *_strstr(char *s, char *accept)
{
	return (strstr(s, accept));
}
