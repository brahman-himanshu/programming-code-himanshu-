#include<stdio.h>
int main (){
int num,rev=0;
printf("enter the no : \n  ");
scanf("%d",&num);
while(num<0){
	rev=rev*10+num%10;
	num/=10;
}
printf(" the reversed number is = %d",rev);
return 0;
}