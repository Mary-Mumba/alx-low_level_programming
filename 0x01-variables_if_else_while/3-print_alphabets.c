#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints the alphabet.
* Return: Always 0 (Success)
*/

int main(void)

{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	putchar(alp);

	for (alp = 'A'; alp <= 'Z'; alp++)
	putchar(alp);
	putchar('\n');
	return (0);
}
