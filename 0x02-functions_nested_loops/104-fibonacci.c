#include <stdio.h>

/**
 *  main - Prints the first 98 Fibonacci numbers
 *
 *  Return: Always 0.
 */

int main(void)
{
int m, bool1, bool2;
long int num1, num2, fnum, fnum2, num11, num22;

num1 = 1;
num2 = 2;
bool1 =  bool2 = 1;
printf("%ld, %ld", num1, num2);
for (m = 0; m < 96; m++)
{
if (bool1)
{
fnum = num1 + num2;
printf(", %ld", fnum);
num1 = num2;
num2 = fnum;
}
else
{
if (bool2)
{
num11 = num1 % 1000000000;
num22 = num2 % 1000000000;
num1 = num1 / 1000000000;
num2 = num2 / 1000000000;
bool2 = 0;
}
fnum2 = (num11 + num22);
fnum = num1 + num2 + (fnum2 / 1000000000);
printf(", %ld", fnum);
printf("%ld", fnum2 % 1000000000);
num1 = num2;
num11 = num22;
num2 = fnum;
num22 = (fnum2 % 1000000000);
}
if (((num1 + num2) < 0) && bool1 == 1)
bool1 = 0;
}
printf("\n");
return (0);
}
