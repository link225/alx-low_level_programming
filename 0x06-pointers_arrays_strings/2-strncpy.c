#include "main.h"
#include <string.h>
/**
 * *_strncpy - concacte two string
 * @dest: first char is pointer
 * @src: second char is pointer
 * @n: int
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
