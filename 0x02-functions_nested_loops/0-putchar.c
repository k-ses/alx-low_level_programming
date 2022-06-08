#include <unistd.h>
#include "main.h"
/**
*main - main function .
*Return: 0
*/
int main(void)
{
char h[] = "_putchar";
int s = sizeof(h);
int i;
for (i = 0; i < s; i++)
{
putchar(h[i]);
}
putchar('\n');
return (0);
}
