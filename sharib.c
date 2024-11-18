#include<stdio.h>
int main (){
	int fact=1;
	int num ;
	printf(" enter a number : \n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		fact*=i;
	}
	printf("factorial of number = %d ", fact );
	return 0;
}
	