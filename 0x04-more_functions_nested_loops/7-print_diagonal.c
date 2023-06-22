#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: number of times diagonal line is printed.
 * Return: no return (void)
 */

void print_diagonal(int n)
{
	int m, e;

	for (m = 0; m < n; m++)
	{
	for (e = 0; e < m; e++)
	{
	_putchar(' ');
	}
	_putchar(92);
	if (m < (n - 1))
	_putchar('\n');
	}
	_putchar('\n');
}
