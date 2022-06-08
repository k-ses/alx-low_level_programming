#include <stdio.h>                                                                                                          
/**                                                                                                                         
*main - main function                                                                                                       
*description prints _putchar                                                                                                
*Return: 0                                                                                                                  
*/                                                                                                                          
int main(void)                                                                                                              
{                                                                                                                           
char h[8]= "_putchar";                                                                                                 
int k;                                                                                                                      
for (k = 0; k < 8; k++)                                                                                                     
putchar(h[k]);                                                                                                        
putchar('\n');                                                                                                              
return (0);  
}
