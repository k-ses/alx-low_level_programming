#include "main.h"
/**
 * Function print_alphabet_x10 - print_alphabet_x10 block
 * Description: print alphabet in lowercase followed by new 
 * followed by new line
*/
void print_alphabet_x10(void)
{
char i;
int a;
a = 0;
while (a < 10)
{
for (i = 'a'; a < 'z'; i++)
_putchar(i);
putchar('\n');
a++;
}
}
