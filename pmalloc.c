#include<stdio.h>
#include<stdlib.h>
int main (void){
	int *p,n,i;
	printf("enter the number :");
	scanf("%d",&n);
	
	p=(int *)malloc(n*sizeof(int ));
	if (p==NULL){
		printf("memory not  available : \n ");
	exit (1);
}
for (i=0;i<n;i++){
	printf("enter an integers : ");
	scanf("%d",p+i);
}
for  (i=0;i<n;i++){
	printf("%d\t",*(p+i));
}
	return 0;
}