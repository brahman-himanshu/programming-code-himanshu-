#include<stdio.h>
int main (){
	unsigned long long int  i =0 , fact =1;
	int n ;
	printf("enter the number of i for factorial = \n");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		fact = fact * i ;
		}
		 printf("%d",fact );
		 return 0;
	}
	