#include<stdio.h>
int calculatearraysum(int *a){
	int size = sizeof(a)/sizeof(a[0]);
	int sum =0;
	for (int i=0;i<=size;i++){
		sum=sum+a[i];
	}
	return sum ;
}
int main (){
	int a[5]={1,2,3,4,5};
	calculatearraysum(a);
	return 0;
	}