#include<stdio.h>
int main (){
	int arr[]={1,2,3,4,5};
	int target =8;
	int n=sizeof(arr)/sizeof(arr[0]);
	int count = 0 ;
	for (int i =0 ; i<n;i++){
		for (int j=i+1;j<n;j++){
			if (arr[i]+arr[j]==target){
				count++;
			}
		}
	}
	printf("print the total outcomes of target values sum of pairs = %d  ",count);
		return 0;
}
			