#include <stdio.h>
/**
*print_alphabet - print the alphabet in lowercase
*Return: void
*/
void ft_print_alphabet(void)
{
char l;
l = 'a';
while (l <= 'z')
{
putchar(l);
l++;
}
}
int main(void)
{
ft_print_alphabet();
return 0;
}
