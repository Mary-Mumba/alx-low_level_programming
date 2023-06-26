#include "main.h"

/**
* rev_string - Reverses a string
* @s: Input string
* Return: nothing (void)
*/

void rev_string(char *s)
{
	char t = s[0];
	int lenght = 0;
	int e;

	while (s[lenght] != '\0')
	lenght++;
	for (e = 0; e < lenght; e++)
	{
	lenght--;
	t = s[e];
	s[e] = s[lenght];
	s[lenght] = t;
	}
}
