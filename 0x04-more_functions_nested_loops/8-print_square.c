#include "main.h"

/**
 * print_square - prints squares with hash symbol
 * @size: size of the square.
 * Return: no return (void)
 */
void print_square(int size)
{
	int m, e;

	for (m = 0; m < size; m++)
	{
	for (e = 0; e < size; e++)
	{
	_putchar(35);
	}
	if (m != size - 1)
	_putchar('\n');
	}
	_putchar('\n');
}
