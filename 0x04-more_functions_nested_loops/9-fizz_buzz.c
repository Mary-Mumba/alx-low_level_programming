#include <stdio.h>

/**
 * main - prints Fizz Buzz for multiplys of 3 and 5 and for both fizzbuzz
 * Return: Always 0.
 */

int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
	if ((m % 3 == 0) && (m % 5 == 0))
	{
		printf("FizzBuzz");
	}
	else if (m % 5 == 0)
	{
		printf("Buzz");
	}
	else if (m % 3 == 0)
	{
		printf("Fizz");
	}
	else
	{
		printf("%d", m);
	}
	if (m != 100)
	{
		printf(" ");
	}
	}
	printf("\n");
	return (0);
}
