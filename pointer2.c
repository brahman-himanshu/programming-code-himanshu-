#include<stdio.h>
int main (){
	int a ;
	int *p;
	printf("enter the value of  a :\n");
	scanf("%d",&a);
	p=&a;
	printf("print the value of a = %d\n",a);
	printf("\n %p",p);
	printf("\n%p",&p);
	printf("\n%d",*p);
	return 0;
}
