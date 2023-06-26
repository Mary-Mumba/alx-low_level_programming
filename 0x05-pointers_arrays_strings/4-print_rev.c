#include <stdio.h>
#include "main.h"

/**
 *  print_rev - prints string in reverse followed by new line
 * @s: string
 * return: nothing (void)
 */

void print_rev(char *s)
{
	int val = 0;
	int e;

	while (*s != '\0')
	{
	val++;
	s++;
	}
	s--;
	for (e = val; e > 0; e--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
