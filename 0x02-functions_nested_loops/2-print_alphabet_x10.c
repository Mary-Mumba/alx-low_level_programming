#include "main.h"

void print_alphabet_x10(void)

{
char q;
int i;

i = 0;
while (i < 10)
{
q = 'a';
while (q <= 'z')
{
_putchar(q);
q++;
}
_putchar('\n');
i++;
}
}
