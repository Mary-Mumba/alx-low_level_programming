#include "main.h"

/**
* print_chessboard - Entry point
* @a: array
* Return: Always 0 (Success)
*/

void print_chessboard(char (*a)[8])
{
int e;
int n;

for (e = 0; e < 8; e++)
{
for (n = 0; n < 8; n++)
_putchar(a[e][n]);
_putchar('\n');
}
}
