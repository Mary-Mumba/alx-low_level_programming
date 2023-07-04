#include "main.h"
#include <stdio.h>

/**
* _strspn - Entry point
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int e = 0;
int g;

while (*s)
{
for (g = 0; accept[g]; g++)
{
if (*s == accept[g])
{
e++;
break;
}
else if (accept[g + 1] == '\0')
return (e);
}
s++;
}
return (e);
}
