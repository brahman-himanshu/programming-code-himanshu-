#include<stdio.h>
  int reverse(int arr[],int n ){
	  for (int i = 0 ;i<n/2;i++){
	  int firstval=arr[i];
	  int secondval=arr[n-i-1];
	  arr[i]=secondval;
	  arr[n-i-1]=firstval;
  }
  }
  int main (){
	  int print arr;
	  int arr[]={1,2,3,4,5};
	  reverse(arr,5);
	  print arr(arr,5);
	  return 0 ;
  }