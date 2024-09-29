#include<stdio.h>
void generatefibonacci(int terms);
int main (){
	int terms;
	printf("enter a no ");
	scanf("%d",&terms);
	generatefibonacci(terms);
	return 0;
}
void generatefibonacci(int terms){
	int a = 0 , b=1,next;
	for(int i=1; i<=terms;i++){
		printf("%d",a);
		next= a+b;
		a=b;
		b=next;
	}
	printf("\n");
}