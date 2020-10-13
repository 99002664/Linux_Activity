
#include<stdio.h>
#include"bit.h"
int main()
{
int n = 5, k = 1; 
printf("%d with %d-th bit Set: %d\n", n, k, setBit(n, k)); 
printf("%d with %d-th bit Cleared: %d\n", n, k, clearBit(n, k)); 
printf("%d with %d-th bit Toggled: %d\n", n, k, toggleBit(n, k));
if(query(n, k))
  printf("Bit number %d is SET in number %d.\n",k,n);
else
  printf("Bit number %d is not SET in number %d.\n",k,n);
return 0; 

}
