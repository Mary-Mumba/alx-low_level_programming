#include "main.h"

/**
* puts_half - prints half of a string
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/

void puts_half(char *str)
{
	int n = 0;
	int e;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 1)
	{
		e = (n - 1) / 2;
		e += 1;
	}
	else
	{
	e = n / 2;
	}
	for (; e < n; e++)
	{
		_putchar(str[e]);
	}
	_putchar('\n');
}
