#include<stdio.h>
int main (){
	int temp;
	int arr[]={1,2,3,4,5,10,11,12,13,14,15};
	int size= sizeof(arr)/sizeof(arr[0]);
	for (int i=1;i<size;i+=2){
	temp=arr[i];
	arr[i]=arr[i-1];
	arr[i-1]=temp;
	}
	printf("print the element in zig zag motion  : \n  ");
	for  (int i=0;i<size;i++){
	printf(" %d",arr[i]);
}
//printf("\n");
return 0;
	}