#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length of string
 */

int _strlen(char *s)
{
	int val = 0;

	while (*s != '\0')
	{
	val++;
	s++;
	}
	return (val);
}
