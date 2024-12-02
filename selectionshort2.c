#include<stdio.h>
int main (){
	int arr[]={1,2,3,4,5};
	int  min ;
	int temp;
	int n=5;
	int i,j;
	for (int  i=0;i<n-1;i++){
		min=i;
		for (int j=i+1;i<n;j++){
			if (arr[j]<min){
				min=j;
			}
		}
		//swap 
		temp =min ;
		min =arr[i];
		arr[i]=temp;
	}
	printf("sorted array ");
	for (int i =0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
		return 0;
	}
		