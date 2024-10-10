#include<stdlib.h>
#include<stdlib.h>
int main (){
	int i ;
	int *ptr=(int *)malloc(2*sizeof(int));
	if (ptr==null){
		printf("enter the two number : \n ");
		return 0;
	}
	printf("enter the  two number :  \n");
	for(i=0;i<2;i++){
		scanf("%d",ptr+i);
		//memory allocation for 2 more  integers
	int *ptr=(int  *)realloc(ptr,2*sizeof(int));
	if(ptr == null ){
		printf("memory not available  . ");
		return 0;
	}
	for (i =0 ;i<4;i++){
		printf("enter an integers : \n ");
		scanf("%d",ptr+i);
	}
	//printing the value on the screen 
	for (i=0;i<4;i++)
		printf("%d ",*(ptr+i));
		return 0;
	}