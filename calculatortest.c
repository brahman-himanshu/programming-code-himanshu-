#include<stdio.h>
int main (){
	char operator;
	int a , b ;
	printf("enter the value of a : ");
	scanf("%d ",&a);
	printf("enter the  value of b : ");
	scanf("%d",&b);
	printf("please enter the following  operator(+,*,/,-): \n ");
scanf(" %c ",&operator);
switch (operator) {
	case '+' :
	int sum =a+b;
	printf("sum of two no is = %d ", sum );
	break;
	case '-':
	int sub = a-b ;
	printf("sub of two no is = %d ", sub );
	break ;
	case '*':
	int mul = a*b ;
	printf("multiply of two no is  = %d ", mul );
	break ;
	int div = a/b ;
    printf("div of two no is = %d ", div );
	break ;
	default :
	printf(" please enter the valid operator :" );
}
return 0;
}