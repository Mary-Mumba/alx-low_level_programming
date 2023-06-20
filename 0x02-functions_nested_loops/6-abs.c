#include "main.h"

/**
*_abs-prints the absolute value of an integer.
*@a:the integer to compute its absolute value.
*Return:returns the abs value.
*/

int _abs(int a)
{
int m = a;
int absval;

if (m < 0)
{
m = m * (-1);
}
absval = m;
return (absval);
}
