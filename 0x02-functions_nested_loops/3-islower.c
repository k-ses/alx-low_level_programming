#include "main.h"
/**
*_islower -_islower block
*@c: The character to be checked
*description: checks whether character c is lowercase
*Return: 1 when true or 0 if false
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
