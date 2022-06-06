#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*prints if random generated number is zero, +tive or -tive
*/
int main(void)
{

int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
   printf("%d is negative\n", n);
else if (n == 0)
	printf("is zero\n", n);	
else (n > 0)
     printf("%d is negative\n", n);
return 0;
}
