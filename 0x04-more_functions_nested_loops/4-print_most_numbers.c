#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * except 2 or 4
 * Return: no return (void)
 */

void print_most_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
	if (m != 2 && m != 4)
	_putchar(m + '0');
	}
	_putchar('\n');
}
