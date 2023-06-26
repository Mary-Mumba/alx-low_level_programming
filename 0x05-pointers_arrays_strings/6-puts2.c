#include "main.h"

/**
* puts2 - function prints every other character of a string
* starting with the first character
* @str: input
* Return: nothing (void)
*/

void puts2(char *str)
{
	int e;
	int m = 0;

	while (str[m] != '\0')
	{
		m++;
	}
	for (e = 0; e < m; e += 2)
	{
		_putchar(str[e]);
	}
	_putchar('\n');
}
