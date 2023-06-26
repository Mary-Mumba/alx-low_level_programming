#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: integer to swap
 * @b: integer also swapped
 * Return: nothing (void)
 */

void swap_int(int *a, int *b)
{
	int val;

	val = *a;
	*a = *b;
	*b = val;
}
