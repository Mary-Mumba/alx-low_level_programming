#include "main.h"

/**
 * print_number - print an integer
 * @n: integer paramaters
 * Return: 0
 */

void print_number(int n)
{
	unsigned int g;

	g = n;

	if (n < 0)
	{
	_putchar('-');
	g = -n;

	}
	if (g / 10 != 0)
	{
	print_number(g / 10);
	}
	_putchar((g % 10) + '0');
}
