#include<stdio.h>
int isEven(int num);
int sumEvenNumber(int limit);
 int main (){
	 int limit;
	  //input the upper limit  from the user 
	  printf("enter a upper limit for the sum of even no : ");
	  scanf("%d",&limit);
	  //function call 
	  int sum = sumEvenNumber(limit);
	  //print the result 
	  printf("sum of even no 1 to %d is : %d\n",limit,sum);
	  return 0;
 }
 // function to check if a no is  even 
 int isEven(int num){
	 return (num%2==0);
 }
 // function calculate the sum of even no up to a given of user upper limit 
 int sumEvenNumber(int limit){
	 int sum =0;
	 for (int i= 1;i<=limit;i++){
		 if (isEven(i)){
			 sum +=i;
		 }
	 }
	 return sum ;
 }