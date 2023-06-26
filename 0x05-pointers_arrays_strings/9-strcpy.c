#include "main.h"

/**
* char *_strcpy - function copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int e;

	for (e = 0; src[e] != '\0'; e++)
	{
		dest[e] = src[e];
	}
	dest[e++] = '\0';
	return (dest);
}
