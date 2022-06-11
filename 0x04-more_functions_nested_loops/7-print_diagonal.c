#include "main.h"
/**
*print_diagonal - entry point
*Description: Prints diagonals
*@n: number of spaces
*Return: void
*/
void print_diagonal(int n)
{
int i, num_lines;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i= 1; i <= n; i++)
{
if (i > 0)
{
for (num_lines = 1; num_lines <= i; num_lines++)
{
putchar('\\');
putchar('\n');
}
}
}
}
}
