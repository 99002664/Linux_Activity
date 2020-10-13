#include "util.h"
#include<string.h>
#include<stdio.h>
#include"bit.h"
#include <stdarg.h>
#include"string1.h"
#include<stdlib.h>
int main()
{
int n = 5, k = 1; 

printf("Length of the string is: %d\n",mystrlen("linux"));
printf("String copied is: %s\n",mystrcpy("program"));
printf("String Concatenation is: %s\n",concat("hi","bye"));
printf("String comparision result is: %d\n",mystrcmp("what","linux"));
printf("The factorial of 5 is: %d\n",fact(5));
printf("Is 6 prime or not: %d\n",prime(6));
printf("Is 1001 Palindrome or not: %d\n",checkpalindrome(1001));
printf("The sum of three arguments [6,4,5]: %d\n",addition(3,6,4,5));
printf("%d with %d-th bit Set: %d\n", n, k, setBit(n, k)); 
printf("%d with %d-th bit Cleared: %d\n", n, k, clearBit(n, k)); 
printf("%d with %d-th bit Toggled: %d\n", n, k, toggleBit(n, k));
if(query(n, k))
  printf("Bit number %d is SET in number %d.\n",k,n);
else
  printf("Bit number %d is not SET in number %d.\n",k,n);
return 0; 

}
