#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
 int a = -10, b = 7; 
 float sum, raz, pro, chast; 
 
 int A = abs(a); 
 int B = abs(b); 
 
 sum = A + B; 
 printf("sum = %f\n", sum); 
 
 raz = A - B; 
 printf("raz = %f\n", raz); 
 
 pro = A * B; 
 printf("pro = %f\n", pro); 
 
 chast = (float) A / B; 
 printf("chast = %f", chast); 
 
 return 0; 
}
 