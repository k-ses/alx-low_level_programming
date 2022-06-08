#include "main.h"
/**
* print_to_98 - print_to_98 block
* @n: int type integer
* Description:print all natural numbers 
* from zero to 98 followed by a new line
*/
void print_to_98(int n)
{
if (n > 98)
{
while(n >= 98)
{
if(n > 99)
{
_putchar((n / 100) + '0');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n--;
}
}
else 
{ 
while (n <= 98)
{
if (n >9)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else
{
_putchar((n % 10) + '0');
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n++;
}
}
_putchar('\n');
}
