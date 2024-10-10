#include<stdio.h>
#include<stdlib.h>
int main (){
	int i , n;
	int null ;
	printf("enter the number of integer : \n ");
	scanf("%d",&n);
	int *ptr=(int  *)malloc(n*sizeof(int));
	if(ptr == null ){
		printf("memory not available  . ");
		return 0;
	}
	for (i =0 ;i<n;i++){
		printf("enter an integers : \n ");
		scanf("%d",ptr+i);
	}
	for (i=0;i<n;i++)
		printf("%d ",*(ptr+i));
		return 0;
	}