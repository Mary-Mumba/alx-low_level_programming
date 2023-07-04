#include "main.h"
#include <stdio.h>

/**
*_memcpy - a function that copies memory area
*@dest: where  memory is stored
*@src: where memory is copied
*@n: number of bytes
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int e = 0;
int g = n;

for (; e < g; e++)
{
dest[e] = src[e];
n--;
}
return (dest);
}
