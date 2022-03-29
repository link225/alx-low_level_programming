#include "main.h"
#include <string.h>
/**
 * *_strncat - concacte two string
 * @dest: first char is pointer
 * @src: second char is pointer
 * @n: third int
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
