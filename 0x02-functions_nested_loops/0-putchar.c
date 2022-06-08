#include <stdio.h>
#include "main.h"
/**
*main - main function
*description prints putchar
*Return: 0
*/
int main(void)
{
char letters[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
putchar(letters[i]);
putchar('\n')
return (0);
}
