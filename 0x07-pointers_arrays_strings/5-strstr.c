#include "main.h"

/**
* _strstr - Entry point
* @haystack: input
* @needle: input
* Return: Always 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *e = haystack;
char *n = needle;

while (*e == *n && *n != '\0')
{
e++;
n++;
}
if (*n == '\0')
return (haystack);
}
return (0);
}
