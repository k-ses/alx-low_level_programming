#include "main.h"
#include <stdio.h>
/**
* print_array - print_array block
* @a: pointer type integer
* @n: pointer type integer
* Description: prins n elements of an array followed by a new ine
* n is th number of elemnts of the array.
* numbers will be separated by comma followed by space
* should be displayed in the same order as they are stored in array
* use printf
*/
void print_array(int *a, int n)
{
int i = 0;
/*looping through the array*/
for (n--; n >= 0; n--, i++)
{
printf("%d", a[i]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
