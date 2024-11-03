#include<stdio.h>
int main (){
	int a , b ;
	printf(" please enter the value of a : \n ");
	scanf("%d",&a);
    printf("enter the value of b : \n ");
	scanf("%d",&b);
	if (a==b){
		printf(" a(%d) and b (%d) are equal: ",a,b);
	}
	else {
		printf("no are not equal : ");
	}
	return 0;
}