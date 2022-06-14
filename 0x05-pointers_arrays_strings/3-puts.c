#include "main.h"
/**
*_puts - _puts block
*@str: pointer type string
*Description: prints a string to a stdout followed by a new line
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
