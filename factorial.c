#include<stdio.h>
int factorial(int num);
 int main (){
	 int num;
	  //input the num from the user 
	  printf("enter a upper num  for the factorial : ");
	  scanf("%d",&num);
	  //function call 
	  int result = factorial(num);
	  //print the result 
	  printf("factorial  %d is : %d\n",num,result);
	  return 0;
 }

 int factorial(int num){
	 int fact =1;
	 for (int i= 1;i<=num;i++){
		 fact*=i;
		 }
	 
	 return fact ;
 }