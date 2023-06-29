#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int t = 0;
	int e = 0;

	while (src[t++])
		e++;
	for (t = 0; src[t] && t < n; t++)
		dest[t] = src[t];
	for (t = e; t < n; t++)
		dest[t] = '\0';
	return (dest);
}
