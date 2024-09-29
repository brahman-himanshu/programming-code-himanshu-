#include<stdio.h>
int main (){
	int rows;
	int printTriangle;
	printf("enter a no of rows :  ");
	scanf("%d",&rows);
	printTriangle(rows);
	 void printTriangle(int n ){
		 int i , j , space;
		 for (int i =1 ; i<=n;i++){
			 for(space = 1 ; space<=n-i;space++){
				 printf(" ");
			 }
			 for(int j=1;j<=(2*i-1);j++){
				 printf("*");
			 }
			 printf("\n");
		 }
	 }

	return 0 ;
} 