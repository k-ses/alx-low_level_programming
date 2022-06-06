#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 * description: prints alphabet in lowercase
 * Return: 0
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar(ch);
}
putchar('\n');
return (0);
}
