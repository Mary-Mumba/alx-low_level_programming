#include "main.h"

/**
* _memset - Entry point
* @s: pointed destintion of address
* @b: constant byte value
* @n: bytes to be changed
* Return: changed array (n bytes)
*/

char *_memset(char *s, char b, unsigned int n)
{
int e = 0;

for (; n > 0; e++)
{
s[e] = b;
n--;
}
return (s);
}
