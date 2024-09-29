#include<stdio.h>
int main (){
	int a , b , remainder,quotient ;
	printf("enter a no of a :\n");
	scanf("%d",&a);
	printf("enter a no of b : \n");
	scanf("%d",&b);
	remainder= a%b;
	quotient=a/b;
	printf("value of a and b remainder is = %d\n",remainder);
	printf("value of a and b quotient is = %d",quotient);
	return 0;
}