#include<stdio.h>
	int countodd(int arr[],int n ){
		int count = 0;
		for ( int i = 0; i<n;i++){
			if (arr[i]%2!=0){
				count++;
			}
		}
		return count ;
		}
		int countodd(int arr[],int n );
		int main (){
			int n ;
		printf("enter a no of n: \n");
		scanf("%d",&n);
	    int result countodd(arr[],n);
		printf("count a odd no in arrays : %d",result );
		return 0 ;
		}
