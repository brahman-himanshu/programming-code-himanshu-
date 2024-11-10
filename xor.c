#include<stdio.h>
int  main (){
int  a=5;
int b =9;
a = a^b;
b=b^a;
a=a^b;
printf("a=%d and b =%d ", a,b );
return 0;
}