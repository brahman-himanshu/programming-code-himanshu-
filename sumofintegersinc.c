#include<stdio.h>
int main (){
	int n , i,sum=0;
	int arr[n];
	printf("enter a no of integers elements :");
	scanf("%d",&n);
	printf("enter %d integers: \n",n);
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (int i = 0 ;i<n;i++){
		sum=sum+arr[i];
	}
	printf("sum of all integers elements = %d\n",sum);
	return 0 ;
}