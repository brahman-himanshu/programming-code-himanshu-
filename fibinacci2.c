#include<stdio.h>
int main (){
	int terms ;
	int a =0,b=1,next;
	printf("enter a no ");
	scanf("%d",&terms);
	for (int i = 1;i<=terms ;i++){
		printf("%d",a);
		next=a+b;
		a=b;
		b=next;
	}
	return 0 ;
}