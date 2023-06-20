#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 * prints alphabet in lowercase.
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
