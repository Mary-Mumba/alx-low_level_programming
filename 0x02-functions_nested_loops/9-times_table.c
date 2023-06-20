#include "main.h"

/**
* times_table - Prints the 9 times table
* Return: no return
*/

void times_table(void)
{
int c, d, mm;

for (c = 0; c <= 9; c++)
{
_putchar(48);
for (d = 1; d <= 9; d++)
{
mm = c * d;
_putchar(44);
_putchar(32);
if (mm <= 9)
{
_putchar(32);
_putchar(mm + 48);
}
else
{
_putchar((mm / 10) + 48);
_putchar((mm % 10) + 48);
}
}
_putchar('\n');
}
}
