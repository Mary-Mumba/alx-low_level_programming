#include "main.h"

/**
 * leet - encode into 1337speak
 * @i: input value
 * Return: i value
 */

char *leet(char *i)
{
	int e, g;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (e = 0; i[e] != '\0'; e++)
	{
	for (g = 0; g < 10; g++)
	{
	if (i[e] == s1[g])
	{
	i[e] = s2[g];
	}
	}
	}
	return (i);
}
