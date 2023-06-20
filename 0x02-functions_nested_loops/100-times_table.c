#include "main.h"

/**
* print_times_table - Prints the n times table
* @n: number times table (0 < n <= 15)
*
* Return: no return
*/

void print_times_table(int n)
{
int c, d, mm;

if (n >= 0 && n <= 15)
{
for (c = 0; c <= n; c++)
{
_putchar(48);
for (d = 1; d <= n; d++)
{
mm = c * d;
_putchar(44);
_putchar(32);
if (mm <= 9)
_putchar(32);
_putchar(32);
_putchar(mm + 48);
}
else if (mm <= 99)
_putchar(32);
_putchar((mm / 10) + 48);
_putchar((mm % 10) + 48);
}
else
{
_putchar(((mm / 100) % 10) + 48);
_putchar(((mm / 10) % 10) + 48);
_putchar((mm % 10) + 48);
}
}
_putchar('\n');
}
}
}
