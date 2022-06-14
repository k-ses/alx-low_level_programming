#include "main.h"
/**
* rev_string - rev_string block
* @s: pointer type string
* Decriptions: reverses a string
 */
void rev_string(char *s)
{
int i, j, k;
char rev;
/* length of the string*/
for (i = 0; s[i] != '\0'; i++)
{
}
j = i;
for (i--, k = 0; k < j / 2; i--, k++)
{
rev = s[k];
s[k] = s[i];
s[i] = rev;
}
}
