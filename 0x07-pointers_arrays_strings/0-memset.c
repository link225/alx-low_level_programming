#include "main.h"
#include <string.h>

/**
 * *_memset - concacte two string
 * @s: first char is pointer
 * @b: second char is pointer
 * @n: unsigned int
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{

	return (memset(s, b, n));
}
