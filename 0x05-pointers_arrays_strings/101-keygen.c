#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates random valid passwords for the program 101-crackme
* Return: Always 0 (Success)
*/

int main(void)

{
	int give[100];
	int e, ttl, m;

	ttl = 0;
	srand(time(NULL));
	for (e = 0; e < 100; e++)
	{
	give[e] = rand() % 78;
	ttl += (give[e] + '0');
	putchar(give[e] + '0');
	if ((2772 - ttl) - '0' < 78)
	{
	m = 2772 - ttl - '0';
	ttl += m;
	putchar(m + '0');
	break;
	}
	}
	return (0);
}
