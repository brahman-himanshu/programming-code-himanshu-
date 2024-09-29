#include<stdio.h>
int main (){
	int x;
	int n;
	int sqrt;
	printf("enter a number ");
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		x=sqrt(n);
	printf("square root of n number = %d",x);
	}
return 0;
}