#include<stdio.h>
int main (){
	int a , b;
	printf("enter the no of a : \n");
	scanf("%d",&a);
	printf("enter the no of b : \n");
	scanf("%d",&b);
	int min = a<b?a:b;
	printf("print the smaller value in a and b is = %d",min);
	return 0;
}