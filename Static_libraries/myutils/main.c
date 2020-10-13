#include "util.h"
#include<stdio.h>
#include <stdarg.h>
int main()
{
printf("Factorial of 5 is %d\n",fact(5));
printf("Is 6 prime or not %d\n",prime(6));
printf("Is 1001 a palindrome %d\n",checkpalindrome(1001));
printf("The sum of 3 arguments[6,4,5] %d\n",addition(3,6,4,5));
return 0; 

}
