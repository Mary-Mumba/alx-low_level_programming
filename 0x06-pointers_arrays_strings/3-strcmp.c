#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: value of first string to be compared
 * @s2: value of second string to be compared
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int e = 0;

	while (s1[e] != '\0' && s2[e] != '\0')
	{
	if (s1[e] != s2[e])
	{
	return (s1[e] - s2[e]);
	}
	e++;
	}
	return (0);
}
