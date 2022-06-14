#include "main.h"
/**
*_strlen - returns the length of a string
*@s: string to find length of
*Return: length of s
*/
void _puts(char *str)
{
int i = 0;
while (*(str + i))
_putchar(*(str + i));
i++;
_putchar ("\n");
}
