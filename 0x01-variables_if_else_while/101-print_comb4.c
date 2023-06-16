#include <stdio.h>
#include <stdlib.h>
/**
* main - prints possible combinations
* Return: 0 (Success)
*/

int main(void)
{

	int i, c, t;

	for (i = '0'; i < '9'; i++)
	{
	for (c = i + 1; c <= '9'; c++)
	{
	for (t = c + 1; t <= '9'; t++)
	{
	if ((c != i) != t)
	{
	putchar(i);
	putchar(c);
	putchar(t);
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
