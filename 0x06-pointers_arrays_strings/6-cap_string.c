#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string that will be capitalized.
 * Return: pointer to changed string.
 */

char *cap_string(char *str)
{
	int e = 0;

	while (str[e])
	{
	while (!(str[e] >= 'a' && str[e] <= 'z'))
	e++;
	if (str[e - 1] == ' ' ||
	str[e - 1] == '\t' ||
	str[e - 1] == '\n' ||
	str[e - 1] == ',' ||
	str[e - 1] == ';' ||
	str[e - 1] == '.' ||
	str[e - 1] == '!' ||
	str[e - 1] == '?' ||
	str[e - 1] == '"' ||
	str[e - 1] == '(' ||
	str[e - 1] == ')' ||
	str[e - 1] == '{' ||
	str[e - 1] == '}' ||
	e == 0)
	str[e] -= 32;
	e++;
	}
	return (str);
}
