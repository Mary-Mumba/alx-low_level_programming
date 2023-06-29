#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string paramaters
 * Return: *s
 */

char *rot13(char *s)
{
	int g;
	int m;
	char set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char setrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (g = 0; s[g] != '\0'; g++)
	{
	for (m = 0; m < 52; m++)
	{
	if (s[g] == set[m])
	{
	s[g] = setrot[m];
	break;
	}
	}
	}
	return (s);
}
