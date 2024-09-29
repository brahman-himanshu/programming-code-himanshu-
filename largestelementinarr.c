#include<stdio.h>
int main (){
	int arr[4][4],max;
	for (int i = 0;i<4;i++){
		for (int j = 0 ; j<4;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	max=arr[0][0];
	for (int i = 0 ;i<4;i++){
		for (int j=0;j<4;j++){
			if (arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	printf("the largest value of matrix is = %d ",max);
	return 0;
}

