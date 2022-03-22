#include "main.h"
#include <string.h>
/**
 * _strcpy - pass to newline
 * @dest: char is pointer
 * @src: char 
 * Return: void
 */

char _strcpy(char *dest, char *src)
{

	char *ch;

	ch = strcpy(dest, src);

	return (ch);
}
