#include "main.h"

/**
 * print_triangle - prints a triangle with hash
 * @size: numbers of lines.
 * Return: no return (void)
 */
void print_triangle(int size)
{
	int m, e;

	for (m = 0; m < size; m++)
	{
	for (e = 1; e < (size - m); e++)
	_putchar(' ');
	for (e--; e < size; e++)
	_putchar(35);
	if (m < (size - 1))
	_putchar('\n');
	}
	_putchar('\n');
}
