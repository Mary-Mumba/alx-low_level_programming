#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Entry point
* @a: input
* @size: input
* Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
	int num1, num2, e;

	num1 = 0;
	num2 = 0;

	for (e = 0; e < size; e++)
	{
	num1 = num1 + a[e * size + e];
	}
	for (e = size - 1; e >= 0; e--)
	{
	num2 += a[e * size + (size - e - 1)];
	}
	printf("%d, %d\n", num1, num2);
}
