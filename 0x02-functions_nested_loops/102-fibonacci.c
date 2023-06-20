#include <stdio.h>
/**
 *main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int m;

long int num1, num2, fnum;
num1 = 1;
num2 = 2;
printf("%ld, %ld", num1, num2);
for (m = 0; m < 48; m++)
{
fnum = num1 + num2;
printf(", %ld", fnum);
num1 = num2;
num2 = fnum;
}
printf("\n");
return (0);
