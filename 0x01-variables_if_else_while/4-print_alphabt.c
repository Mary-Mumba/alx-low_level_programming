#include <stdio.h>
#include <stdlib.h>
/**
* main - prints alphabet except q and e
* Return: Always 0 (Success)
*/

int main(void)
{
	char alp, e, q;

	e = 'e';
	q = 'q';

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	if (alp != e && alp != q)
	putchar(alp);
	}
	putchar('\n');
	return (0);
}
