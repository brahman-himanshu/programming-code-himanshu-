#include<stdio.h>
int main (){
	int arr[3][3],i,j;
	int sum=0;
	printf("enter a matrix number :\n ");
	for (int i =0;i<3;i++){
		for(int j = 0 ;j<3;j++){
		scanf("%d",&arr[i][j]);
		}
	}
	printf("check the matrix : \n");
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if (i==j){
				sum=sum+arr[i][j];
			//	printf("%d",sum);
			}
	}
	}
	printf("sum of diagonal=%d",sum);
	return 0;
}