#include "main.h"
/**
* print_last_digit - print_last_digit block
* @i: int type number
* Description: Print lst digit of a number
* @i int type number
 Return: last digit
*/
int print_last_digit(int i)
{
int r;
if (i > 0)
{
r = i % 10;
_putchar(r + '0');
return (r);
}
else
{
r = -1 * (i % 10);
_putchar(r + '0');
return (r);
}
}
