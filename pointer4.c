#include<stdio.h>
int main (){
	int a=5;
	int **ptrtoptr;
	ptrtoptr=&ptr;
	int *ptr;
	ptr=&a;
	printf("%d",*ptr);
	printf("%p",&ptr);
	printf("%d",**ptrtoptr);
	return 0;
}