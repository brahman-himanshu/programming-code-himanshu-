#include<stdio.h>
int main (){
	int arr[5]={9,4,6,3,8};
	int min,temp;
	printf("print a array :\n");
	for (int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	for (int i =0;i<5-1;i++){
		min=i;
		for (int j =i+1;j<5;j++){
			if (arr[j]<arr[min]){
				min=j;
			}
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	
	printf("print sorted array :\n");
	for (int i =0;i<5;i++){
		printf("%d",arr[i]);
	}
printf("\n");
printf("completed this code himanshu");
return 0;
}