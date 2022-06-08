#include "main.h"
/**
*_isalpha - _isalpha block
*@c: char character c, can be aphabet or not
*Description: Checks if character c is an alphabet.
*Return: 1 else Return: 0
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c > 64 && c <= 90))
return (1);
else
return (0);
}
