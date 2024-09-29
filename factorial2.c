#include<stdio.h>
int main (){
	int fact=1;
	int num;
	printf("enter a num ");
       scanf("%d",&num);
	for(int i =1 ;i<=num;i++){
	fact*=i;
	}
	printf("factorial of these no is :%d",fact);
	return 0;
}