#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */

void print_buffer(char *b, int size)
{
	int e, m, n;

	if (size <= 0)
	printf("\n");
	else
	{
	for (e = 0; e < size; e += 10)
	{
	printf("%.8x:", e);
	for (m = e; m < e + 10; m++)
	{
	if (m % 2 == 0)
	printf(" ");
	if (m < size)
	printf("%.2x", *(b + m));
	else
	printf("  ");
	}
	printf(" ");
	for (n = e; n < e + 10; n++)
	{
	if (n >= size)
	break;
	if (*(b + n) < 32 || *(b + n) > 126)
	printf("%c", '.');
	else
	printf("%c", *(b + n));
	}
	printf("\n");
	}
	}
}
