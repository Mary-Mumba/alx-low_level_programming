#include "main.h"

/**
 * _isupper - checks if c  is an uppercase character.
 * @c: input letter (number checked)
 * Return: 1 if is an uppercase character, 0 for other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
