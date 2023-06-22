#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long m, primf;
	long num = 612852475143;
	double sq = sqrt(num);

	for (m = 1; m <= sq; m++)
	{
		if (num % m == 0)
	{
		primf = num / m;
	}
	}
	printf("%ld\n", primf);
	return (0);
}
