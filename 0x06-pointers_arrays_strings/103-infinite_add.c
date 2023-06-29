#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int g1 = 0, g2 = 0, opp, e, d1, d2, a = 0;

while (*(n1 + g1) != '\0')
g1++;
while (*(n2 + g2) != '\0')
g2++;
if (g1 >= g2)
e = g1;
else
e = g2;
if (size_r <= e + 1)
return (0);
r[e + 1] = '\0';
g1--, g2--, size_r--;
d1 = *(n1 + g1) -48, d2 = *(n2 + g2) -48;
while (e >= 0)
{
opp = d1 + d2 + a;
if (opp >= 10)
a = opp / 10;
else
a = 0;
if (opp > 0)
*(r + e) = (opp % 10) + 48;
else
*(r + e) = '0';
if (g1 > 0)
g1--, d1 = *(n1 + g1) -48;
else
d1 = 0;
if (g2 > 0)
g2--, d2 = *(n2 + g2) -48;
else
d2 = 0;
e--, size_r--;
}
if (*(r) == '0')
return (r + 1);
else
return (r);
}
