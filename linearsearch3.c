#include<stdio.h>
int main (){
	int arr[5]={1,2,3,4,5};
	int  n=5, found=0, search=7;
	for (int i=0 ;i <5;i++){
		if (arr[i]==search){
			printf("elemet is search= %d and iteration is = %d ",search, i);
		found=1;
		break;
		}
	}
	if (!found){
		printf("element not search ");
	}
	return 0;
}
	