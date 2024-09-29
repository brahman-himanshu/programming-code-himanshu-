#include<stdio.h>
int main (){
	int a , b ,temp;
  printf("enter the  no of a : \n");
  scanf("%d",a);
  printf("enter the no of b : \n");
  scanf("%d",b);
  temp=a;
  a=b;
  b=temp;
  printf("value of a = %d and b =%d",a,b);
  return 0;
}