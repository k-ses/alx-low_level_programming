#include "main.h"
/**
 * jack_bauer - jack_bauer block
 * Description: Prints every minute of a day
 *starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int H, M;
int i, j, k, l;
/*hours loop*/
for (H = 0; H < 24; H++)
{
i = H / 10;
j = H % 10;
for (M = 0; M < 60; M++)
{ /* minute lop */
k = M / 10;
l = M % 10;
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
}
