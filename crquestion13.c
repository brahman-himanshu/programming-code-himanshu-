//Program - 13
//WAP to find the factorial of a given number.

#include <stdio.h> 
int main()                  //Priyanka IMSEC
{ 
int priyanka, i, fact = 1; 
printf("Enter an integer: "); 
scanf("%d",&priyanka); 
if (priyanka < 0) 
printf("Factorial of a negative number doesn't exist."); 
else { 
for (i = 1; i <= priyanka; ++i) 
{ 
fact *= i; 
} 
printf("Factorial of %d = %d", priyanka, fact); 
} 
return 0;
} 



//[PRIYANKA GUPTA]