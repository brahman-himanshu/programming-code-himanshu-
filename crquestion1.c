//Program-1
//WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the student. 
#include<stdio.h>
int main(){                                           //Priyanka IMSEC{ 
int hindi, english, science, computer,math, Sum ; 
float percentage; 
printf("Enter marks of Hindi:  "); 
scanf("%d",&hindi); 
printf("Enter marks of English:  "); 
scanf("%d",&english); 
printf("Enter marks of Science:  "); 
scanf("%d",&science); 
printf("Enter marks of math:   "); 
scanf("%d",&math); 
printf("Enter marks of Computer: "); 
scanf("%d",&computer); 
Sum = hindi+english+science+math +computer; 
printf("Sum of marks=%d\n",Sum); 
percentage=Sum/5; 
printf("Percentage of marks=%f",percentage);
return 0;

}