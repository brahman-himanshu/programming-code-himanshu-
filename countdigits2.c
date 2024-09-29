#include<stdio.h>
int main (){
	int number;
	int count=0;
printf("enter a no ");
scanf("%d",&number);
if(number == 0){
	return 1;
}
while (number !=0){
	number /=10;
	count++;
}
printf("the no %d has  %d digits . \n",number,count);
	return 0 ;
}