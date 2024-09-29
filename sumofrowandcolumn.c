#include<stdio.h>
int main (){
	int arr[3][3],i,j,sr,sc;
	printf("enter a matrix number :\n ");
	for (int i =0;i<3;i++){
		for(int j = 0 ;j<3;j++){
		scanf("%d",&arr[i][j]);
		}
	}
	printf("check the matrix : \n");
	for (int i=0;i<3;i++){
		sr=sc=0;
		for (int j=0;j<3;j++){
		sr=sr+arr[i][j];
		sc=sc+arr[j][i];
		}
		printf("value of sum of row = %d \n the value of sum of column = %d\n",sr,sc);
	}
	return 0;
}