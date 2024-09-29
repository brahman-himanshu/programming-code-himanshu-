#include<stdio.h>
int main (){
	int arr[2][3],i,j,a;
	int transposeMatrix[3][2];
	printf("enter a matrix number :\n ");
	for (int i =0;i<2;i++){
		for(int j = 0 ;j<3;j++){
		scanf("%d",&arr[i][j]);
		}
	}
	printf("check the matrix : \n");
	for (int i=0;i<2;i++){
		for (int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("transpose of the matrix:\n");
	for (int i=0;i<3;i++){
		for (int j = 0;j<;j++){
			transposeMatrix[i][j]=arr[j][i];
		}
		
		a = 2;
		printf("\n");
	}
	
	
	printf("check the Trranspose matrix : \n");
	for (int i=0;i<3;i++){
		for (int j=0;j<2;j++){
			printf("%d ",transposeMatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}