#include<stdio.h>
int main (){
	int sum ;
	int n ;
	printf("enter a no ");
	scanf("%d",&n);
	for (int i=1;i<=sum;i++){
		sum = n*n-1/2;
	}
		if (n>0){
			printf("sum:%d",sum);
		}
		else {
			printf("please enter a natural no ");
		}
	return 0 ;
}