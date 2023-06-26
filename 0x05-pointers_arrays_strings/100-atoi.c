#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be converted
* Return: the int converted from the string
*/

int _atoi(char *s)
{
	int e = 0;
	unsigned int t = 0;
	int k = 1;
	int d = 0;

	while (s[e])
	{
	if (s[e] == 45)
	{
		k *= -1;
	}
	while (s[e] >= 48 && s[e] <= 57)
	{
		d = 1;
		t = (t * 10) + (s[e] - '0');
		e++;
	}
	if (d == 1)
	{
		break;
	}
	e++;
	}
	t *= k;
	return (t);
}
