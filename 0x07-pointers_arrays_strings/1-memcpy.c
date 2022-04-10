#include "main.h"
#include <string.h>

/**
 * *_memcpy - concacte two string
 * @s: first char is pointer
 * @b: second char is pointer
 * @n: unsigned int
 * Return: char
 */

char *_memcpy(char *s, char *b, unsigned int n)
{

	return (memcpy(s, b, n));
}
