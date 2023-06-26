#include "main.h"
#include <stdio.h>

/**
* print_array - function prints n elements of an array
* @a: array name
* @n: is the number of elements of the array to be printed
* Return: nothing (void)
*/

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
	if (t != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
