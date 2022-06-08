#include <unistd.h>
/**
*main - main function
*Description prints the word putchar
*Return: 0
*/
int main(void)
{
char h[i] = "_putchar";
int s = sizeof(h);
int i;
for (i = 0; i < s; i++)
{
putchar(h[i]);
}
putchar('\n');
return (0);
}
