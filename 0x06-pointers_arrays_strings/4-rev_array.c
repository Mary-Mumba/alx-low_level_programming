#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: the array
 * @n: number of elements of array
 * Return: nothing (void)
 */

void reverse_array(int *a, int n)
{
	int t, e;

	for (e = n - 1; e >= n / 2; e--)
	{
		t = a[n - 1 - e];
		a[n - 1 - e] = a[e];
		a[e] = t;
	}
}
