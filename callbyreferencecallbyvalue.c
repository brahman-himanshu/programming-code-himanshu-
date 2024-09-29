#include<stdio.h>
int callbyrefernce( int *p, int *q){
	*p=*p+1;
	*q=*q+1;
	printf("printf the value of  *p = %d and *q= %d ",*p,*q);
}
int value  (int x ,int y){
x=x+1;
y=y+1;
printf("\nprint the value of x = %d and y = %d ",x,y);
}

int main (){
	int a,b;
	printf("enter the value of   x = \n");
	scanf("%d",&a);
	printf("enter the values of  y =\n");
	scanf("%d",&b);
	value(a,b);
	callbyrefernce(&a,&b);
	return 0;
}