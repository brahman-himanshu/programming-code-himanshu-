#include<stdio.h>
int mult(int a);
int main (){
	int a;
printf("enter a no of a ");
scanf("%d",&a);
int multiply = mult(a);
//printf("multiply of two no is = %d",multiply);
return 0 ;
}
int mult(int a){
int  i;
for(int i=0; i<=10;i++){
	printf("%d * %d=%d \n",a,i,a*i);
}
	printf("\n");
	return (a*i);
}

	