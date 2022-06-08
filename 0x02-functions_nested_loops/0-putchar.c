#include <stdio.h>
#include "main.h"
/**
*main - Check description
*Description: It prints the word _putchar, followed by a new line.
*Return: 0.
*/
int main(void)
{
char d[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
_putchar(d[i]);
_putchar('\n');
return (0);
}
