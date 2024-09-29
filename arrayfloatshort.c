#include<stdio.h>
int main (){
	float arr[5]={9.0 , 4.2 , 6.5 , 3.6 , 8.3};
	int min;
	float temp;
	printf("print a array :\n");
	for (int i=0;i<5;i++){
		printf("%.1f",arr[i]);
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
		printf("%.1f",arr[i]);
	}
printf("\n");
printf("completed this code himanshu");
return 0;
}