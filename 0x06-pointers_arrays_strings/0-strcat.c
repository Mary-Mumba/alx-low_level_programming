#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: input destination string value
 * @src: input source string value
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int e = 0;
	int n;

	while (dest[e])
	{
	e++;
	}
	for (n = 0; src[n] != 0; n++)
	{
	dest[e] = src[n];
	e++;
	}
	return (dest);
}
