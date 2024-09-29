#include<stdio.h>
int sum(int a , int b );
int main (){
	int a,b ;
	printf("enter a no a ");
	scanf("%d",&a);
	printf("enter a no of b ");
	scanf("%d",&b);
	int result = sum(a,b);
	printf("sum of two no a and  b : %d", result );
	return 0;
}
int sum(int a , int b ){
	int sum ;
	sum = a+b;
	return (a+b);
}