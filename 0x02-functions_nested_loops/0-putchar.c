#include <unistd.h>
/**
* main - Check description
* Description: It prints the word _putchar, followed by a new line.
* Return: 0.
*/
int main(void)
{
char word[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
putchar(word[i]);
putchar('\n');
return (0);
}
