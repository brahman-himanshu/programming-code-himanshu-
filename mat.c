#include<stdio.h>
int main (){
	int i , j ;
	int arr[3][3];
	printf("enter the element of the matrix(%d*%d) : \n ",arr[i]);
	for (int i = 0 ;i<3;i++){
		for (int j = 0 ; j<3;j++ ){
		scanf("%d",&arr[i][j]);
	}
	}
	printf("the matrix that you have entered is : \n");
	for (int i = 0 ;i<3;i++){
		for (int j = 0 ; j<3;j++ ){
	printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
return 0;
}