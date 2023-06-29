#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase letters
 * @string: string that is changed
 * Return: string
 */

char *string_toupper(char *string)
{
	int g = 0;

	while (string[g])
	{
	if (string[g] >= 'a' && string[g] <= 'z')
	string[g] -= 32;
	g++;
	}
	return (string);
}
