#include "main.h"

/**
 * _isdigit - checks if digit is between 0 and 9
 * @c: input letter (number checked)
 * Return: 1 if number is 0-9 or 0 in other case.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
