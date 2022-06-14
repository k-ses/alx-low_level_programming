#include "main.h"
/**
* puts_half - puts_half block
* @str: pointer type string
* Description: print half a string followed by a new line
* print the second half of the string
* if number of characters is odd print the last n characters of string
*/
void puts_half(char *str)
{
int i, n;
/* for loop to upto length of a string*/
for (i = 0; str[i] != '\0'; i++)
;
n = (i - 1) / 2;
for (i = n + 1; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
