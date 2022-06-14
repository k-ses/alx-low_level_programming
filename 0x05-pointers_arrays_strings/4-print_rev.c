#include "main.h"
/**
* print_rev - print_rev block
* @s: pointer type string
* Description: prints a string in reverse follwed by a new line
*/
void print_rev(char *s)
{
int i;
/* loops through the string an outputs its length*/
for (i = 0; s[i] != '\0'; i++)
{
}
/*Reversing the string*/
for (i--; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
