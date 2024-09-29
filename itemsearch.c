#include<stdio.h>
int main (){
	int arr[]={1,2,3,4};
	for (int i=0;i<4;i++){
	printf("\n%p",&arr[i]);
	printf("\n***********");
	printf("\n%d",*(arr + i));
     printf("\n%d",*(arri));
	}
	return 0;
}