#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: 0 (success)
*/

int main(void)

{
	int i, c;

	for (i = '0'; i < '9'; i++)
	{
	for (c = i + 1; c <= '9'; c++)
	{
	if (c != i)
	{
	putchar(i);
	putchar(c);
	if (i == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
