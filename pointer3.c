#include<stdio.h>
int main(){
	int a;
int 	*ptr; 
	printf("enter the value of a = \n");
	scanf("%d",&a);
	ptr=&a;
     printf("%p",ptr);
	 printf("\n%d",size of (a));
	printf("\n%p",ptr + 2);
	printf("\n%p",*ptr+2);
	return 0;
}