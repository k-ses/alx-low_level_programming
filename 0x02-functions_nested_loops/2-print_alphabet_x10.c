#include "main.h"
/**
 * Function print_alphabet_x10 - print_alphabet_x10 block
 * Description: print alphabet in lowercase followed by new 
 * followed by new line
*/
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
i++;
}
}
