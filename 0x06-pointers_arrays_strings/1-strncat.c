#include "main.h"
#include <stdio.h>
/**
* _strncat - concatenate two strings
* using n bytes from src
* @dest: input string value that is appended
* @src: input string value appending dest
* @n: number of bytes from src
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int t = 0;
	int e = 0;

	while (dest[t++])
	e++;
	for (t = 0; src[t] && t < n; t++)
	dest[e++] = src[t];
	return (dest);
}
