#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints numbers between 0 to 9 and letters between a to f.
* Return: Always 0 (Success)
*/

int main(void)

{
	int i;
	char alp;

	for (i = '0'; i <= '9'; i++)
	putchar(i);

	for (alp = 'a'; alp <= 'f'; alp++)
	putchar(alp);
	putchar(\n);

	return (0);
}
