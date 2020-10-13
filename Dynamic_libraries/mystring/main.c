#include<string.h>
#include<stdio.h>
#include"string1.h"
#include<stdlib.h>
int main()
{ 
printf("Length of string is %d\n",mystrlen("linux"));
printf("String copied is %s\n",mystrcpy("program"));
printf("String concatenated is %s\n",concat("hi","bye"));
printf("Result of string comparision is %d\n",mystrcmp("what","linux"));
return 0; 
}
